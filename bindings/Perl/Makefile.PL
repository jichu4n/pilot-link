use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.

$prefix = "/usr/local";
$exec_prefix = "${prefix}";
$libdir = "../../libpisock/.libs";

$lib = "-L$libdir -lpisock";

$plincdir = "../../include";
$h2xsheaders = join(' ', map { "$plincdir/$_" } qw(
					      pi-macros.h
					      pi-buffer.h
					      pi-file.h
					      pi-datebook.h
					      pi-memo.h
					      pi-expense.h
					      pi-address.h
					      pi-todo.h
					      pi-mail.h
					      pi-socket.h
					      pi-dlp.h
					      pi-syspkt.h
					      pi-error.h
					      pi-version.h
					     ));

sub MY::postamble {
    "%.inc:
	perl ./h2xs-pilot-link -n PDA::Pilot $h2xsheaders
	cp PDA-Pilot/fallback/*.inc .
	rm -rf PDA-Pilot
";
}	

WriteMakefile(
    'NAME'       => 'PDA::Pilot',
    'VERSION'    => '0.12.5',
    'XSPROTOARG' => '-noprototypes',
    'INC'        => "-I$plincdir",
    'DEFINE'     => '-DPERL_POLLUTE',
    'PREFIX'     => "$prefix",
    'INSTALLDIRS'=> 'vendor',
    'dynamic_lib'=> {'OTHERLDFLAGS' => $lib},
    'depend'     => {'Pilot.c' => 'const-c.inc const-xs.inc'},
    'clean'      => {'FILES'   => 'const-c.inc const-xs.inc'},
);
