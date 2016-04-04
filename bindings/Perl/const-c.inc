#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_5 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     etBus etFax etGas */
  /* Offset 2 gives the best switch position.  */
  switch (name[2]) {
  case 'B':
    if (memEQ(name, "etBus", 5)) {
    /*                 ^        */
      *iv_return = etBus;
      return PERL_constant_ISIV;
    }
    break;
  case 'F':
    if (memEQ(name, "etFax", 5)) {
    /*                 ^        */
      *iv_return = etFax;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "etGas", 5)) {
    /*                 ^        */
      *iv_return = etGas;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_6 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     epAmEx epCash epVISA esDate esType etLimo etTaxi etTips */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case 'E':
    if (memEQ(name, "epAmEx", 6)) {
    /*                   ^       */
      *iv_return = epAmEx;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "epVISA", 6)) {
    /*                   ^       */
      *iv_return = epVISA;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "etLimo", 6)) {
    /*                   ^       */
      *iv_return = etLimo;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "esType", 6)) {
    /*                   ^       */
      *iv_return = esType;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etTips", 6)) {
    /*                   ^       */
      *iv_return = etTips;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "epCash", 6)) {
    /*                   ^       */
      *iv_return = epCash;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "esDate", 6)) {
    /*                   ^       */
      *iv_return = esDate;
      return PERL_constant_ISIV;
    }
    break;
  case 'x':
    if (memEQ(name, "etTaxi", 6)) {
    /*                   ^       */
      *iv_return = etTaxi;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_7 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     RPC_End advDays edMiles epCheck etGifts etHotel etLunch etOther etSnack
     etTolls etTrain memo_v1 todo_v1 */
  /* Offset 2 gives the best switch position.  */
  switch (name[2]) {
  case 'C':
    if (memEQ(name, "RPC_End", 7)) {
    /*                 ^          */
#ifdef RPC_End
      *iv_return = RPC_End;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "epCheck", 7)) {
    /*                 ^          */
      *iv_return = epCheck;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "etGifts", 7)) {
    /*                 ^          */
      *iv_return = etGifts;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "etHotel", 7)) {
    /*                 ^          */
      *iv_return = etHotel;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "etLunch", 7)) {
    /*                 ^          */
      *iv_return = etLunch;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "edMiles", 7)) {
    /*                 ^          */
      *iv_return = edMiles;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "etOther", 7)) {
    /*                 ^          */
      *iv_return = etOther;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "etSnack", 7)) {
    /*                 ^          */
      *iv_return = etSnack;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "etTolls", 7)) {
    /*                 ^          */
      *iv_return = etTolls;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etTrain", 7)) {
    /*                 ^          */
      *iv_return = etTrain;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "todo_v1", 7)) {
    /*                 ^          */
      *iv_return = todo_v1;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "memo_v1", 7)) {
    /*                 ^          */
      *iv_return = memo_v1;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "advDays", 7)) {
    /*                 ^          */
      *iv_return = advDays;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_8 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     advHours entryZip etDinner etSubway */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'p':
    if (memEQ(name, "entryZi", 7)) {
    /*                      p     */
      *iv_return = entryZip;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "etDinne", 7)) {
    /*                      r     */
      *iv_return = etDinner;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "advHour", 7)) {
    /*                      s     */
      *iv_return = advHours;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "etSubwa", 7)) {
    /*                      y     */
      *iv_return = etSubway;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_9 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_PF_DEV PI_PF_DLP PI_PF_NET PI_PF_SLP PI_PF_SYS dom1stFri dom1stMon
     dom1stSat dom1stSun dom1stThu dom1stTue dom1stWen dom2ndFri dom2ndMon
     dom2ndSat dom2ndSun dom2ndThu dom2ndTue dom2ndWen dom3rdFri dom3rdMon
     dom3rdSat dom3rdSun dom3rdThu dom3rdTue dom3rdWen dom4thFri dom4thMon
     dom4thSat dom4thSun dom4thThu dom4thTue dom4thWen entryCity entryNote
     epPrepaid epUnfiled etAirfare etLaundry etLodging etMileage etParking
     etPostage */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'E':
    if (memEQ(name, "PI_PF_DEV", 9)) {
    /*                      ^       */
      *iv_return = PI_PF_DEV;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_PF_NET", 9)) {
    /*                      ^       */
      *iv_return = PI_PF_NET;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "PI_PF_DLP", 9)) {
    /*                      ^       */
      *iv_return = PI_PF_DLP;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_PF_SLP", 9)) {
    /*                      ^       */
      *iv_return = PI_PF_SLP;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "PI_PF_SYS", 9)) {
    /*                      ^       */
      *iv_return = PI_PF_SYS;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "dom1stSat", 9)) {
    /*                      ^       */
      *iv_return = dom1stSat;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndSat", 9)) {
    /*                      ^       */
      *iv_return = dom2ndSat;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdSat", 9)) {
    /*                      ^       */
      *iv_return = dom3rdSat;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thSat", 9)) {
    /*                      ^       */
      *iv_return = dom4thSat;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dom1stWen", 9)) {
    /*                      ^       */
      *iv_return = dom1stWen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndWen", 9)) {
    /*                      ^       */
      *iv_return = dom2ndWen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdWen", 9)) {
    /*                      ^       */
      *iv_return = dom3rdWen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thWen", 9)) {
    /*                      ^       */
      *iv_return = dom4thWen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "epUnfiled", 9)) {
    /*                      ^       */
      *iv_return = epUnfiled;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "etMileage", 9)) {
    /*                      ^       */
      *iv_return = etMileage;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etPostage", 9)) {
    /*                      ^       */
      *iv_return = etPostage;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "dom1stThu", 9)) {
    /*                      ^       */
      *iv_return = dom1stThu;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndThu", 9)) {
    /*                      ^       */
      *iv_return = dom2ndThu;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdThu", 9)) {
    /*                      ^       */
      *iv_return = dom3rdThu;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thThu", 9)) {
    /*                      ^       */
      *iv_return = dom4thThu;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "epPrepaid", 9)) {
    /*                      ^       */
      *iv_return = epPrepaid;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "etLodging", 9)) {
    /*                      ^       */
      *iv_return = etLodging;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etParking", 9)) {
    /*                      ^       */
      *iv_return = etParking;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "dom1stMon", 9)) {
    /*                      ^       */
      *iv_return = dom1stMon;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndMon", 9)) {
    /*                      ^       */
      *iv_return = dom2ndMon;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdMon", 9)) {
    /*                      ^       */
      *iv_return = dom3rdMon;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thMon", 9)) {
    /*                      ^       */
      *iv_return = dom4thMon;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dom1stFri", 9)) {
    /*                      ^       */
      *iv_return = dom1stFri;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndFri", 9)) {
    /*                      ^       */
      *iv_return = dom2ndFri;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdFri", 9)) {
    /*                      ^       */
      *iv_return = dom3rdFri;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thFri", 9)) {
    /*                      ^       */
      *iv_return = dom4thFri;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etAirfare", 9)) {
    /*                      ^       */
      *iv_return = etAirfare;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etLaundry", 9)) {
    /*                      ^       */
      *iv_return = etLaundry;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "entryCity", 9)) {
    /*                      ^       */
      *iv_return = entryCity;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryNote", 9)) {
    /*                      ^       */
      *iv_return = entryNote;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dom1stSun", 9)) {
    /*                      ^       */
      *iv_return = dom1stSun;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom1stTue", 9)) {
    /*                      ^       */
      *iv_return = dom1stTue;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndSun", 9)) {
    /*                      ^       */
      *iv_return = dom2ndSun;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom2ndTue", 9)) {
    /*                      ^       */
      *iv_return = dom2ndTue;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdSun", 9)) {
    /*                      ^       */
      *iv_return = dom3rdSun;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom3rdTue", 9)) {
    /*                      ^       */
      *iv_return = dom3rdTue;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thSun", 9)) {
    /*                      ^       */
      *iv_return = dom4thSun;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dom4thTue", 9)) {
    /*                      ^       */
      *iv_return = dom4thTue;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_CMD_CMP PI_CMD_NET PI_CMD_SYS PI_PF_PADP PI_SLP_SRC address_v1
     advMinutes dlpErrBusy dlpErrOpen dlpErrSize dlpErrSync domLastFri
     domLastMon domLastSat domLastSun domLastThu domLastTue domLastWen
     entryState entryTitle etSupplies repeatNone */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'D':
    if (memEQ(name, "PI_PF_PADP", 10)) {
    /*                       ^        */
      *iv_return = PI_PF_PADP;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "PI_CMD_NET", 10)) {
    /*                       ^        */
#ifdef PI_CMD_NET
      *iv_return = PI_CMD_NET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "PI_CMD_CMP", 10)) {
    /*                       ^        */
#ifdef PI_CMD_CMP
      *iv_return = PI_CMD_CMP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "PI_SLP_SRC", 10)) {
    /*                       ^        */
      *iv_return = PI_SLP_SRC;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "PI_CMD_SYS", 10)) {
    /*                       ^        */
#ifdef PI_CMD_SYS
      *iv_return = PI_CMD_SYS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'a':
    if (memEQ(name, "domLastSat", 10)) {
    /*                       ^        */
      *iv_return = domLastSat;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "advMinutes", 10)) {
    /*                       ^        */
      *iv_return = advMinutes;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpErrOpen", 10)) {
    /*                       ^        */
      *iv_return = dlpErrOpen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "domLastWen", 10)) {
    /*                       ^        */
      *iv_return = domLastWen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etSupplies", 10)) {
    /*                       ^        */
      *iv_return = etSupplies;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "domLastThu", 10)) {
    /*                       ^        */
      *iv_return = domLastThu;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "entryTitle", 10)) {
    /*                       ^        */
      *iv_return = entryTitle;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpErrSync", 10)) {
    /*                       ^        */
      *iv_return = dlpErrSync;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "repeatNone", 10)) {
    /*                       ^        */
      *iv_return = repeatNone;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "domLastMon", 10)) {
    /*                       ^        */
      *iv_return = domLastMon;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "domLastFri", 10)) {
    /*                       ^        */
      *iv_return = domLastFri;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpErrBusy", 10)) {
    /*                       ^        */
      *iv_return = dlpErrBusy;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "entryState", 10)) {
    /*                       ^        */
      *iv_return = entryState;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "domLastSun", 10)) {
    /*                       ^        */
      *iv_return = domLastSun;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "domLastTue", 10)) {
    /*                       ^        */
      *iv_return = domLastTue;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "address_v1", 10)) {
    /*                       ^        */
      *iv_return = address_v1;
      return PERL_constant_ISIV;
    }
    break;
  case 'z':
    if (memEQ(name, "dlpErrSize", 10)) {
    /*                       ^        */
      *iv_return = dlpErrSize;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_AF_PILOT PI_CMP_BAUD PI_CMP_TYPE PI_CMP_VERS PI_DEV_RATE PI_MSG_PEEK
     PI_NET_TYPE PI_SLP_DEST PI_SLP_TXID PI_SLP_TYPE PI_SOCK_RAW RPC_NoReply
     RPC_NullPtr datebook_v1 dlpErrLimit dlpErrParam dlpErrSpace dlpLastFunc
     dlpOpenRead entryPhone1 entryPhone2 entryPhone3 entryPhone4 entryPhone5
     etBreakfast etCarRental etTelephone mailPrefSig mailSyncAll repeatDaily
     vfsModeRead */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case '1':
    if (memEQ(name, "datebook_v", 10)) {
    /*                         1      */
      *iv_return = datebook_v1;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryPhone", 10)) {
    /*                         1      */
      *iv_return = entryPhone1;
      return PERL_constant_ISIV;
    }
    break;
  case '2':
    if (memEQ(name, "entryPhone", 10)) {
    /*                         2      */
      *iv_return = entryPhone2;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "entryPhone", 10)) {
    /*                         3      */
      *iv_return = entryPhone3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "entryPhone", 10)) {
    /*                         4      */
      *iv_return = entryPhone4;
      return PERL_constant_ISIV;
    }
    break;
  case '5':
    if (memEQ(name, "entryPhone", 10)) {
    /*                         5      */
      *iv_return = entryPhone5;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "PI_CMP_BAU", 10)) {
    /*                         D      */
      *iv_return = PI_CMP_BAUD;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_SLP_TXI", 10)) {
    /*                         D      */
      *iv_return = PI_SLP_TXID;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "PI_CMP_TYP", 10)) {
    /*                         E      */
      *iv_return = PI_CMP_TYPE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_DEV_RAT", 10)) {
    /*                         E      */
      *iv_return = PI_DEV_RATE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_NET_TYP", 10)) {
    /*                         E      */
      *iv_return = PI_NET_TYPE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_SLP_TYP", 10)) {
    /*                         E      */
      *iv_return = PI_SLP_TYPE;
      return PERL_constant_ISIV;
    }
    break;
  case 'K':
    if (memEQ(name, "PI_MSG_PEE", 10)) {
    /*                         K      */
#ifdef PI_MSG_PEEK
      *iv_return = PI_MSG_PEEK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "PI_CMP_VER", 10)) {
    /*                         S      */
      *iv_return = PI_CMP_VERS;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "PI_AF_PILO", 10)) {
    /*                         T      */
#ifdef PI_AF_PILOT
      *iv_return = PI_AF_PILOT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PI_SLP_DES", 10)) {
    /*                         T      */
      *iv_return = PI_SLP_DEST;
      return PERL_constant_ISIV;
    }
    break;
  case 'W':
    if (memEQ(name, "PI_SOCK_RA", 10)) {
    /*                         W      */
#ifdef PI_SOCK_RAW
      *iv_return = PI_SOCK_RAW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'c':
    if (memEQ(name, "dlpLastFun", 10)) {
    /*                         c      */
      *iv_return = dlpLastFunc;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "dlpOpenRea", 10)) {
    /*                         d      */
      *iv_return = dlpOpenRead;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsModeRea", 10)) {
    /*                         d      */
      *iv_return = vfsModeRead;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpErrSpac", 10)) {
    /*                         e      */
      *iv_return = dlpErrSpace;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etTelephon", 10)) {
    /*                         e      */
      *iv_return = etTelephone;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "mailPrefSi", 10)) {
    /*                         g      */
      *iv_return = mailPrefSig;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "etCarRenta", 10)) {
    /*                         l      */
      *iv_return = etCarRental;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailSyncAl", 10)) {
    /*                         l      */
      *iv_return = mailSyncAll;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "dlpErrPara", 10)) {
    /*                         m      */
      *iv_return = dlpErrParam;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "RPC_NullPt", 10)) {
    /*                         r      */
#ifdef RPC_NullPtr
      *iv_return = RPC_NullPtr;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 't':
    if (memEQ(name, "dlpErrLimi", 10)) {
    /*                         t      */
      *iv_return = dlpErrLimit;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etBreakfas", 10)) {
    /*                         t      */
      *iv_return = etBreakfast;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "RPC_NoRepl", 10)) {
    /*                         y      */
#ifdef RPC_NoReply
      *iv_return = RPC_NoReply;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "repeatDail", 10)) {
    /*                         y      */
      *iv_return = repeatDaily;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     DLP_BUF_SIZE Expense_Pref PI_CMP_FLAGS PI_LEVEL_CMP PI_LEVEL_DEV
     PI_LEVEL_DLP PI_LEVEL_NET PI_LEVEL_SLP PI_LEVEL_SYS PI_PADP_TYPE
     RPC_IntReply RPC_PtrReply dlpDBListRAM dlpDBListROM dlpErrExists
     dlpErrMemory dlpErrSystem dlpOpenWrite edKilometers entryAddress
     entryCompany entryCountry entryCustom1 entryCustom2 entryCustom3
     entryCustom4 epCreditCard epMasterCard mailCtgDraft mailCtgFiled
     mailCtgInbox mailSyncSend repeatWeekly repeatYearly vfsModeWrite
     vfsOriginEnd */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'A':
    if (memEQ(name, "PI_CMP_FLAGS", 12)) {
    /*                        ^         */
      *iv_return = PI_CMP_FLAGS;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "PI_LEVEL_CMP", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_CMP;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "PI_LEVEL_DEV", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_DEV;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_LEVEL_DLP", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_DLP;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "vfsOriginEnd", 12)) {
    /*                        ^         */
      *iv_return = vfsOriginEnd;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "DLP_BUF_SIZE", 12)) {
    /*                        ^         */
#ifdef DLP_BUF_SIZE
      *iv_return = DLP_BUF_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "PI_LEVEL_NET", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_NET;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "dlpDBListRAM", 12)) {
    /*                        ^         */
      *iv_return = dlpDBListRAM;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpDBListROM", 12)) {
    /*                        ^         */
      *iv_return = dlpDBListROM;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_LEVEL_SLP", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_SLP;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_LEVEL_SYS", 12)) {
    /*                        ^         */
      *iv_return = PI_LEVEL_SYS;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "PI_PADP_TYPE", 12)) {
    /*                        ^         */
      *iv_return = PI_PADP_TYPE;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "entryCompany", 12)) {
    /*                        ^         */
      *iv_return = entryCompany;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "epCreditCard", 12)) {
    /*                        ^         */
      *iv_return = epCreditCard;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "epMasterCard", 12)) {
    /*                        ^         */
      *iv_return = epMasterCard;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailCtgDraft", 12)) {
    /*                        ^         */
      *iv_return = mailCtgDraft;
      return PERL_constant_ISIV;
    }
    break;
  case 'b':
    if (memEQ(name, "mailCtgInbox", 12)) {
    /*                        ^         */
      *iv_return = mailCtgInbox;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "edKilometers", 12)) {
    /*                        ^         */
      *iv_return = edKilometers;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryAddress", 12)) {
    /*                        ^         */
      *iv_return = entryAddress;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailSyncSend", 12)) {
    /*                        ^         */
      *iv_return = mailSyncSend;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpOpenWrite", 12)) {
    /*                        ^         */
      *iv_return = dlpOpenWrite;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsModeWrite", 12)) {
    /*                        ^         */
      *iv_return = vfsModeWrite;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "repeatWeekly", 12)) {
    /*                        ^         */
      *iv_return = repeatWeekly;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "mailCtgFiled", 12)) {
    /*                        ^         */
      *iv_return = mailCtgFiled;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "dlpErrMemory", 12)) {
    /*                        ^         */
      *iv_return = dlpErrMemory;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCustom1", 12)) {
    /*                        ^         */
      *iv_return = entryCustom1;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCustom2", 12)) {
    /*                        ^         */
      *iv_return = entryCustom2;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCustom3", 12)) {
    /*                        ^         */
      *iv_return = entryCustom3;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCustom4", 12)) {
    /*                        ^         */
      *iv_return = entryCustom4;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "RPC_IntReply", 12)) {
    /*                        ^         */
#ifdef RPC_IntReply
      *iv_return = RPC_IntReply;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RPC_PtrReply", 12)) {
    /*                        ^         */
#ifdef RPC_PtrReply
      *iv_return = RPC_PtrReply;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'r':
    if (memEQ(name, "Expense_Pref", 12)) {
    /*                        ^         */
#ifdef Expense_Pref
      *iv_return = Expense_Pref;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "repeatYearly", 12)) {
    /*                        ^         */
      *iv_return = repeatYearly;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpErrExists", 12)) {
    /*                        ^         */
      *iv_return = dlpErrExists;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpErrSystem", 12)) {
    /*                        ^         */
      *iv_return = dlpErrSystem;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCountry", 12)) {
    /*                        ^         */
      *iv_return = entryCountry;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_LEVEL_PADP PI_LEVEL_SOCK PI_SOCK_STATE dlpDBFlagOpen dlpErrDeleted
     dlpErrNoError dlpErrNotSupp dlpErrUnknown dlpErrUnused1 dlpErrWrapper
     dlpFuncFindDB dlpFuncOpenDB dlpOpenSecret dlpProcessRPC entryCategory
     entryLastname etIncidentals mailCtgOutbox mailPrefLocal vfsModeCreate */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'E':
    if (memEQ(name, "dlpErrNoError", 13)) {
    /*                       ^           */
      *iv_return = dlpErrNoError;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "mailPrefLocal", 13)) {
    /*                       ^           */
      *iv_return = mailPrefLocal;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_SOCK_STATE", 13)) {
    /*                       ^           */
      *iv_return = PI_SOCK_STATE;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "PI_LEVEL_PADP", 13)) {
    /*                       ^           */
      *iv_return = PI_LEVEL_PADP;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_LEVEL_SOCK", 13)) {
    /*                       ^           */
      *iv_return = PI_LEVEL_SOCK;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "dlpErrWrapper", 13)) {
    /*                       ^           */
      *iv_return = dlpErrWrapper;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpOpenSecret", 13)) {
    /*                       ^           */
      *iv_return = dlpOpenSecret;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryCategory", 13)) {
    /*                       ^           */
      *iv_return = entryCategory;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "dlpDBFlagOpen", 13)) {
    /*                       ^           */
      *iv_return = dlpDBFlagOpen;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpFuncFindDB", 13)) {
    /*                       ^           */
      *iv_return = dlpFuncFindDB;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "dlpErrUnknown", 13)) {
    /*                       ^           */
      *iv_return = dlpErrUnknown;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpErrDeleted", 13)) {
    /*                       ^           */
      *iv_return = dlpErrDeleted;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "etIncidentals", 13)) {
    /*                       ^           */
      *iv_return = etIncidentals;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "dlpFuncOpenDB", 13)) {
    /*                       ^           */
      *iv_return = dlpFuncOpenDB;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "vfsModeCreate", 13)) {
    /*                       ^           */
      *iv_return = vfsModeCreate;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpProcessRPC", 13)) {
    /*                       ^           */
      *iv_return = dlpProcessRPC;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpErrNotSupp", 13)) {
    /*                       ^           */
      *iv_return = dlpErrNotSupp;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "entryLastname", 13)) {
    /*                       ^           */
      *iv_return = entryLastname;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpErrUnused1", 13)) {
    /*                       ^           */
      *iv_return = dlpErrUnused1;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailCtgOutbox", 13)) {
    /*                       ^           */
      *iv_return = mailCtgOutbox;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DEV_ESTRATE PI_DEV_TIMEOUT PI_ERR_SOCK_IO PI_MSG_REALLOC PI_SLP_LASTSRC
     PI_SOCK_STREAM dlpDBFlagNewer dlpDBFlagReset dlpErrArgument dlpErrNoneOpen
     dlpErrNotFound dlpErrReadOnly dlpFuncCloseDB dlpRecAttrBusy dlpVFSOpenRead
     entryFirstname mailCtgDeleted mailPrefRemote mailSyncFilter mailSyncUnread
     vfsMAXFILENAME */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'A':
    if (memEQ(name, "PI_MSG_REALLOC", 14)) {
    /*                        ^           */
#ifdef PI_MSG_REALLOC
      *iv_return = PI_MSG_REALLOC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "PI_ERR_SOCK_IO", 14)) {
    /*                        ^           */
      *iv_return = PI_ERR_SOCK_IO;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "vfsMAXFILENAME", 14)) {
    /*                        ^           */
#ifdef vfsMAXFILENAME
      *iv_return = vfsMAXFILENAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "dlpErrNotFound", 14)) {
    /*                        ^           */
      *iv_return = dlpErrNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "PI_DEV_TIMEOUT", 14)) {
    /*                        ^           */
      *iv_return = PI_DEV_TIMEOUT;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "dlpDBFlagNewer", 14)) {
    /*                        ^           */
      *iv_return = dlpDBFlagNewer;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "dlpDBFlagReset", 14)) {
    /*                        ^           */
      *iv_return = dlpDBFlagReset;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_SLP_LASTSRC", 14)) {
    /*                        ^           */
      *iv_return = PI_SLP_LASTSRC;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "PI_DEV_ESTRATE", 14)) {
    /*                        ^           */
      *iv_return = PI_DEV_ESTRATE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_SOCK_STREAM", 14)) {
    /*                        ^           */
#ifdef PI_SOCK_STREAM
      *iv_return = PI_SOCK_STREAM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'd':
    if (memEQ(name, "dlpErrReadOnly", 14)) {
    /*                        ^           */
      *iv_return = dlpErrReadOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpErrNoneOpen", 14)) {
    /*                        ^           */
      *iv_return = dlpErrNoneOpen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailPrefRemote", 14)) {
    /*                        ^           */
      *iv_return = mailPrefRemote;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "mailSyncFilter", 14)) {
    /*                        ^           */
      *iv_return = mailSyncFilter;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "mailCtgDeleted", 14)) {
    /*                        ^           */
      *iv_return = mailCtgDeleted;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpVFSOpenRead", 14)) {
    /*                        ^           */
      *iv_return = dlpVFSOpenRead;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "mailSyncUnread", 14)) {
    /*                        ^           */
      *iv_return = mailSyncUnread;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "dlpFuncCloseDB", 14)) {
    /*                        ^           */
      *iv_return = dlpFuncCloseDB;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dlpRecAttrBusy", 14)) {
    /*                        ^           */
      *iv_return = dlpRecAttrBusy;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "entryFirstname", 14)) {
    /*                        ^           */
      *iv_return = entryFirstname;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpErrArgument", 14)) {
    /*                        ^           */
      *iv_return = dlpErrArgument;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DEV_HIGHRATE PI_SLP_LASTDEST PI_SLP_LASTTXID PI_SLP_LASTTYPE
     dlpDBFlagBackup dlpDBFlagBundle dlpDBFlagHidden dlpDBFlagSchema
     dlpDBFlagSecure dlpDBFlagStream dlpEndCodeOther dlpFuncCreateDB
     dlpFuncDeleteDB dlpFuncUnknown1 dlpFuncUnknown3 dlpFuncUnknown4
     dlpLoopBackTest dlpRecAttrDirty dlpReservedFunc dlpVFSOpenWrite
     etBusinessMeals etEntertainment vfsFileAttrLink vfsIteratorStop
     vfsModeTruncate */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case '1':
    if (memEQ(name, "dlpFuncUnknown", 14)) {
    /*                             1      */
      *iv_return = dlpFuncUnknown1;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "dlpFuncUnknown", 14)) {
    /*                             3      */
      *iv_return = dlpFuncUnknown3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "dlpFuncUnknown", 14)) {
    /*                             4      */
      *iv_return = dlpFuncUnknown4;
      return PERL_constant_ISIV;
    }
    break;
  case 'B':
    if (memEQ(name, "dlpFuncCreateD", 14)) {
    /*                             B      */
      *iv_return = dlpFuncCreateDB;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncDeleteD", 14)) {
    /*                             B      */
      *iv_return = dlpFuncDeleteDB;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "PI_SLP_LASTTXI", 14)) {
    /*                             D      */
      *iv_return = PI_SLP_LASTTXID;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "PI_DEV_HIGHRAT", 14)) {
    /*                             E      */
      *iv_return = PI_DEV_HIGHRATE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_SLP_LASTTYP", 14)) {
    /*                             E      */
      *iv_return = PI_SLP_LASTTYPE;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "PI_SLP_LASTDES", 14)) {
    /*                             T      */
      *iv_return = PI_SLP_LASTDEST;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "dlpDBFlagSchem", 14)) {
    /*                             a      */
      *iv_return = dlpDBFlagSchema;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "dlpReservedFun", 14)) {
    /*                             c      */
      *iv_return = dlpReservedFunc;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpDBFlagBundl", 14)) {
    /*                             e      */
      *iv_return = dlpDBFlagBundle;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpDBFlagSecur", 14)) {
    /*                             e      */
      *iv_return = dlpDBFlagSecure;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpVFSOpenWrit", 14)) {
    /*                             e      */
      *iv_return = dlpVFSOpenWrite;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsModeTruncat", 14)) {
    /*                             e      */
      *iv_return = vfsModeTruncate;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "vfsFileAttrLin", 14)) {
    /*                             k      */
      *iv_return = vfsFileAttrLink;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "dlpDBFlagStrea", 14)) {
    /*                             m      */
      *iv_return = dlpDBFlagStream;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpDBFlagHidde", 14)) {
    /*                             n      */
      *iv_return = dlpDBFlagHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "dlpDBFlagBacku", 14)) {
    /*                             p      */
      *iv_return = dlpDBFlagBackup;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsIteratorSto", 14)) {
    /*                             p      */
      *iv_return = vfsIteratorStop;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dlpEndCodeOthe", 14)) {
    /*                             r      */
      *iv_return = dlpEndCodeOther;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "etBusinessMeal", 14)) {
    /*                             s      */
      *iv_return = etBusinessMeals;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpLoopBackTes", 14)) {
    /*                             t      */
      *iv_return = dlpLoopBackTest;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "etEntertainmen", 14)) {
    /*                             t      */
      *iv_return = etEntertainment;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "dlpRecAttrDirt", 14)) {
    /*                             y      */
      *iv_return = dlpRecAttrDirty;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PILOT_LINK_MAJOR PILOT_LINK_MINOR PI_PADP_LASTTYPE PI_TRANSFER_STOP
     dlpDBFlagFixedUp dlpEndCodeNormal dlpErrIllegalReq dlpFuncEndOfSync
     dlpFuncSetDBInfo dlpOpenExclusive dlpOpenReadWrite dlpRecAttrSecret
     vfsInvalidVolRef vfsIteratorStart vfsModeExclusive vfsModeLeaveOpen
     vfsModeReadWrite vfsOriginCurrent vfsVolAttrHidden */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'D':
    if (memEQ(name, "dlpFuncSetDBInfo", 16)) {
    /*                         ^            */
      *iv_return = dlpFuncSetDBInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "vfsVolAttrHidden", 16)) {
    /*                         ^            */
      *iv_return = vfsVolAttrHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "dlpEndCodeNormal", 16)) {
    /*                         ^            */
      *iv_return = dlpEndCodeNormal;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "dlpFuncEndOfSync", 16)) {
    /*                         ^            */
      *iv_return = dlpFuncEndOfSync;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "PI_TRANSFER_STOP", 16)) {
    /*                         ^            */
#ifdef PI_TRANSFER_STOP
      *iv_return = PI_TRANSFER_STOP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "PI_PADP_LASTTYPE", 16)) {
    /*                         ^            */
      *iv_return = PI_PADP_LASTTYPE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpRecAttrSecret", 16)) {
    /*                         ^            */
      *iv_return = dlpRecAttrSecret;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "vfsInvalidVolRef", 16)) {
    /*                         ^            */
#ifdef vfsInvalidVolRef
      *iv_return = vfsInvalidVolRef;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "PILOT_LINK_MAJOR", 16)) {
    /*                         ^            */
#ifdef PILOT_LINK_MAJOR
      *iv_return = PILOT_LINK_MAJOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PILOT_LINK_MINOR", 16)) {
    /*                         ^            */
#ifdef PILOT_LINK_MINOR
      *iv_return = PILOT_LINK_MINOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'd':
    if (memEQ(name, "dlpOpenReadWrite", 16)) {
    /*                         ^            */
      *iv_return = dlpOpenReadWrite;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsModeReadWrite", 16)) {
    /*                         ^            */
      *iv_return = vfsModeReadWrite;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "dlpErrIllegalReq", 16)) {
    /*                         ^            */
      *iv_return = dlpErrIllegalReq;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpDBFlagFixedUp", 16)) {
    /*                         ^            */
      *iv_return = dlpDBFlagFixedUp;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpOpenExclusive", 16)) {
    /*                         ^            */
      *iv_return = dlpOpenExclusive;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsModeExclusive", 16)) {
    /*                         ^            */
      *iv_return = vfsModeExclusive;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "vfsIteratorStart", 16)) {
    /*                         ^            */
      *iv_return = vfsIteratorStart;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "vfsOriginCurrent", 16)) {
    /*                         ^            */
      *iv_return = vfsOriginCurrent;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "vfsModeLeaveOpen", 16)) {
    /*                         ^            */
      *iv_return = vfsModeLeaveOpen;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DLP_OFFSET_CMD PI_ERR_DLP_PALMOS PI_ERR_DLP_SOCKET PI_ERR_FILE_ERROR
     dlpDBFlagExtended dlpDBFlagReadOnly dlpDBFlagResource dlpDBListMultiple
     dlpEndCodeUserCan dlpErrAlreadyOpen dlpErrTooManyOpen dlpFuncReadDBList
     dlpFuncReadRecord dlpFuncVFSFileEOF dlpFuncVFSGetFile dlpFuncVFSPutFile
     dlpRecAttrDeleted vfsFileAttrHidden vfsFileAttrSystem vfsInvalidFileRef */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'D':
    if (memEQ(name, "dlpFuncReadDBList", 17)) {
    /*                          ^            */
      *iv_return = dlpFuncReadDBList;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "PI_DLP_OFFSET_CMD", 17)) {
    /*                          ^            */
#ifdef PI_DLP_OFFSET_CMD
      *iv_return = PI_DLP_OFFSET_CMD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "vfsFileAttrHidden", 17)) {
    /*                          ^            */
      *iv_return = vfsFileAttrHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "PI_ERR_DLP_PALMOS", 17)) {
    /*                          ^            */
      *iv_return = PI_ERR_DLP_PALMOS;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "dlpFuncReadRecord", 17)) {
    /*                          ^            */
      *iv_return = dlpFuncReadRecord;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_ERR_DLP_SOCKET", 17)) {
    /*                          ^            */
      *iv_return = PI_ERR_DLP_SOCKET;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsFileAttrSystem", 17)) {
    /*                          ^            */
      *iv_return = vfsFileAttrSystem;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "PI_ERR_FILE_ERROR", 17)) {
    /*                          ^            */
      *iv_return = PI_ERR_FILE_ERROR;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "dlpDBFlagReadOnly", 17)) {
    /*                          ^            */
      *iv_return = dlpDBFlagReadOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "dlpErrAlreadyOpen", 17)) {
    /*                          ^            */
      *iv_return = dlpErrAlreadyOpen;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpFuncVFSGetFile", 17)) {
    /*                          ^            */
      *iv_return = dlpFuncVFSGetFile;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpRecAttrDeleted", 17)) {
    /*                          ^            */
      *iv_return = dlpRecAttrDeleted;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpFuncVFSFileEOF", 17)) {
    /*                          ^            */
      *iv_return = dlpFuncVFSFileEOF;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsInvalidFileRef", 17)) {
    /*                          ^            */
#ifdef vfsInvalidFileRef
      *iv_return = vfsInvalidFileRef;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'l':
    if (memEQ(name, "dlpDBListMultiple", 17)) {
    /*                          ^            */
      *iv_return = dlpDBListMultiple;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpErrTooManyOpen", 17)) {
    /*                          ^            */
      *iv_return = dlpErrTooManyOpen;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpDBFlagResource", 17)) {
    /*                          ^            */
      *iv_return = dlpDBFlagResource;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpEndCodeUserCan", 17)) {
    /*                          ^            */
      *iv_return = dlpEndCodeUserCan;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpDBFlagExtended", 17)) {
    /*                          ^            */
      *iv_return = dlpDBFlagExtended;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpFuncVFSPutFile", 17)) {
    /*                          ^            */
      *iv_return = dlpFuncVFSPutFile;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PILOT_LINK_VERSION PI_DLP_OFFSET_ARGC PI_DLP_OFFSET_ARGV
     PI_ERR_DLP_BUFSIZE PI_ERR_DLP_COMMAND dlpFuncExpCardInfo
     dlpFuncOpenConduit dlpFuncReadFeature dlpFuncReadSysInfo
     dlpFuncResetSystem dlpFuncVFSFileOpen dlpFuncVFSFileRead
     dlpFuncVFSFileSeek dlpFuncVFSFileSize dlpFuncVFSFileTell
     dlpFuncWriteRecord dlpRecAttrArchived repeatMonthlyByDay
     vfsFileAttrArchive vfsFileDateCreated vfsOriginBeginning
     vfsVolAttrReadOnly */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'A':
    if (memEQ(name, "PI_DLP_OFFSET_ARGC", 18)) {
    /*                             ^          */
#ifdef PI_DLP_OFFSET_ARGC
      *iv_return = PI_DLP_OFFSET_ARGC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PI_DLP_OFFSET_ARGV", 18)) {
    /*                             ^          */
#ifdef PI_DLP_OFFSET_ARGV
      *iv_return = PI_DLP_OFFSET_ARGV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "dlpFuncExpCardInfo", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncExpCardInfo;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncReadSysInfo", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncReadSysInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "PI_ERR_DLP_COMMAND", 18)) {
    /*                             ^          */
      *iv_return = PI_ERR_DLP_COMMAND;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "dlpFuncVFSFileOpen", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncVFSFileOpen;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsVolAttrReadOnly", 18)) {
    /*                             ^          */
      *iv_return = vfsVolAttrReadOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "dlpFuncVFSFileRead", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncVFSFileRead;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PILOT_LINK_VERSION", 18)) {
    /*                             ^          */
#ifdef PILOT_LINK_VERSION
      *iv_return = PILOT_LINK_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PI_ERR_DLP_BUFSIZE", 18)) {
    /*                             ^          */
      *iv_return = PI_ERR_DLP_BUFSIZE;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncVFSFileSeek", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncVFSFileSeek;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncVFSFileSize", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncVFSFileSize;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "dlpFuncVFSFileTell", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncVFSFileTell;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "vfsFileDateCreated", 18)) {
    /*                             ^          */
      *iv_return = vfsFileDateCreated;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "dlpFuncWriteRecord", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncWriteRecord;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "dlpFuncOpenConduit", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncOpenConduit;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "vfsFileAttrArchive", 18)) {
    /*                             ^          */
      *iv_return = vfsFileAttrArchive;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpRecAttrArchived", 18)) {
    /*                             ^          */
      *iv_return = dlpRecAttrArchived;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "vfsOriginBeginning", 18)) {
    /*                             ^          */
      *iv_return = vfsOriginBeginning;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpFuncResetSystem", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncResetSystem;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpFuncReadFeature", 18)) {
    /*                             ^          */
      *iv_return = dlpFuncReadFeature;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "repeatMonthlyByDay", 18)) {
    /*                             ^          */
      *iv_return = repeatMonthlyByDay;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DLP_ARG_FIRST_ID PI_DLP_ARG_LONG_LEN PI_DLP_ARG_TINY_LEN
     PI_ERR_DLP_DATASIZE PI_ERR_FILE_ABORTED PI_ERR_FILE_INVALID
     PI_ERR_PROT_ABORTED PI_ERR_SOCK_INVALID PI_ERR_SOCK_TIMEOUT
     PI_NET_SPLIT_WRITES PI_PADP_FREEZE_TXID PI_PROGRESS_SEND_DB
     dlpDBFlagLaunchable dlpDBFlagRecyclable dlpFuncDeleteRecord
     dlpFuncMoveCategory dlpFuncReadAppBlock dlpFuncReadRecordEx
     dlpFuncReadResource dlpFuncReadUserInfo dlpFuncVFSDirCreate
     dlpFuncVFSFileClose dlpFuncVFSFileWrite dlpVFSOpenExclusive
     dlpVFSOpenReadWrite repeatMonthlyByDate vfsFileAttrReadOnly
     vfsFileDateAccessed vfsFileDateModified vfsVolAttrSlotBased */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'A':
    if (memEQ(name, "PI_ERR_DLP_DATASIZE", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_DLP_DATASIZE;
      return PERL_constant_ISIV;
    }
    break;
  case 'B':
    if (memEQ(name, "dlpFuncReadAppBlock", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncReadAppBlock;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsVolAttrSlotBased", 19)) {
    /*                             ^           */
      *iv_return = vfsVolAttrSlotBased;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "dlpFuncVFSFileClose", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncVFSFileClose;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "PI_DLP_ARG_LONG_LEN", 19)) {
    /*                             ^           */
#ifdef PI_DLP_ARG_LONG_LEN
      *iv_return = PI_DLP_ARG_LONG_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "PI_ERR_SOCK_TIMEOUT", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_SOCK_TIMEOUT;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "PI_PROGRESS_SEND_DB", 19)) {
    /*                             ^           */
      *iv_return = PI_PROGRESS_SEND_DB;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "PI_ERR_FILE_ABORTED", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_FILE_ABORTED;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_ERR_PROT_ABORTED", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_PROT_ABORTED;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "PI_NET_SPLIT_WRITES", 19)) {
    /*                             ^           */
      *iv_return = PI_NET_SPLIT_WRITES;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_DLP_ARG_FIRST_ID", 19)) {
    /*                             ^           */
#ifdef PI_DLP_ARG_FIRST_ID
      *iv_return = PI_DLP_ARG_FIRST_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "PI_ERR_FILE_INVALID", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_FILE_INVALID;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_ERR_SOCK_INVALID", 19)) {
    /*                             ^           */
      *iv_return = PI_ERR_SOCK_INVALID;
      return PERL_constant_ISIV;
    }
    break;
  case 'W':
    if (memEQ(name, "dlpFuncVFSFileWrite", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncVFSFileWrite;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpVFSOpenReadWrite", 19)) {
    /*                             ^           */
      *iv_return = dlpVFSOpenReadWrite;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "PI_DLP_ARG_TINY_LEN", 19)) {
    /*                             ^           */
#ifdef PI_DLP_ARG_TINY_LEN
      *iv_return = PI_DLP_ARG_TINY_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "PI_PADP_FREEZE_TXID", 19)) {
    /*                             ^           */
      *iv_return = PI_PADP_FREEZE_TXID;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "vfsFileAttrReadOnly", 19)) {
    /*                             ^           */
      *iv_return = vfsFileAttrReadOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpFuncDeleteRecord", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncDeleteRecord;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncMoveCategory", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncMoveCategory;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "vfsFileDateAccessed", 19)) {
    /*                             ^           */
      *iv_return = vfsFileDateAccessed;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "dlpDBFlagLaunchable", 19)) {
    /*                             ^           */
      *iv_return = dlpDBFlagLaunchable;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "vfsFileDateModified", 19)) {
    /*                             ^           */
      *iv_return = vfsFileDateModified;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpDBFlagRecyclable", 19)) {
    /*                             ^           */
      *iv_return = dlpDBFlagRecyclable;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "dlpFuncReadRecordEx", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncReadRecordEx;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncReadResource", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncReadResource;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dlpFuncReadUserInfo", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncReadUserInfo;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncVFSDirCreate", 19)) {
    /*                             ^           */
      *iv_return = dlpFuncVFSDirCreate;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpVFSOpenExclusive", 19)) {
    /*                             ^           */
      *iv_return = dlpVFSOpenExclusive;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "repeatMonthlyByDate", 19)) {
    /*                             ^           */
      *iv_return = repeatMonthlyByDate;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DLP_ARG_FLAG_LONG PI_DLP_ARG_FLAG_MASK PI_DLP_ARG_FLAG_TINY
     PI_DLP_ARG_SHORT_LEN PI_DLP_VERSION_MAJOR PI_DLP_VERSION_MINOR
     PI_ERR_SOCK_CANCELED PI_ERR_SOCK_LISTENER PI_PROGRESS_SEND_VFS
     PI_TRANSFER_CONTINUE dlpFuncReadSortBlock dlpFuncVFSFileCreate
     dlpFuncVFSFileDelete dlpFuncVFSFileRename dlpFuncVFSFileResize
     dlpFuncVFSVolumeInfo dlpFuncVFSVolumeSize dlpFuncWriteAppBlock
     dlpFuncWriteRecordEx dlpFuncWriteResource dlpFuncWriteUserInfo
     vfsFileAttrDirectory */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'A':
    if (memEQ(name, "PI_DLP_VERSION_MAJOR", 20)) {
    /*                               ^          */
#ifdef PI_DLP_VERSION_MAJOR
      *iv_return = PI_DLP_VERSION_MAJOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "PI_ERR_SOCK_CANCELED", 20)) {
    /*                               ^          */
      *iv_return = PI_ERR_SOCK_CANCELED;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PI_ERR_SOCK_LISTENER", 20)) {
    /*                               ^          */
      *iv_return = PI_ERR_SOCK_LISTENER;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "PI_DLP_VERSION_MINOR", 20)) {
    /*                               ^          */
#ifdef PI_DLP_VERSION_MINOR
      *iv_return = PI_DLP_VERSION_MINOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PI_TRANSFER_CONTINUE", 20)) {
    /*                               ^          */
#ifdef PI_TRANSFER_CONTINUE
      *iv_return = PI_TRANSFER_CONTINUE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "dlpFuncVFSVolumeInfo", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSVolumeInfo;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncWriteUserInfo", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncWriteUserInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "PI_DLP_ARG_FLAG_LONG", 20)) {
    /*                               ^          */
#ifdef PI_DLP_ARG_FLAG_LONG
      *iv_return = PI_DLP_ARG_FLAG_LONG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "PI_DLP_ARG_FLAG_MASK", 20)) {
    /*                               ^          */
#ifdef PI_DLP_ARG_FLAG_MASK
      *iv_return = PI_DLP_ARG_FLAG_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "dlpFuncVFSVolumeSize", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSVolumeSize;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "PI_DLP_ARG_FLAG_TINY", 20)) {
    /*                               ^          */
#ifdef PI_DLP_ARG_FLAG_TINY
      *iv_return = PI_DLP_ARG_FLAG_TINY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "PI_DLP_ARG_SHORT_LEN", 20)) {
    /*                               ^          */
#ifdef PI_DLP_ARG_SHORT_LEN
      *iv_return = PI_DLP_ARG_SHORT_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PI_PROGRESS_SEND_VFS", 20)) {
    /*                               ^          */
      *iv_return = PI_PROGRESS_SEND_VFS;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpFuncVFSFileCreate", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSFileCreate;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpFuncReadSortBlock", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncReadSortBlock;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncVFSFileDelete", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSFileDelete;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncWriteAppBlock", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncWriteAppBlock;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpFuncVFSFileRename", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSFileRename;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dlpFuncWriteRecordEx", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncWriteRecordEx;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpFuncVFSFileResize", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncVFSFileResize;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "vfsFileAttrDirectory", 20)) {
    /*                               ^          */
      *iv_return = vfsFileAttrDirectory;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpFuncWriteResource", 20)) {
    /*                               ^          */
      *iv_return = dlpFuncWriteResource;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_DLP_ARG_FLAG_SHORT PI_ERR_FILE_NOT_FOUND PI_ERR_GENERIC_MEMORY
     PI_ERR_GENERIC_SYSTEM PI_ERR_PROT_BADPACKET dlpDBFlagAppInfoDirty
     dlpDBMiscFlagRamBased dlpEndCodeOutOfMemory dlpFuncDeleteResource
     dlpFuncExpCardPresent dlpFuncGetSysDateTime dlpFuncReadOpenDBInfo
     dlpFuncReadResourceEx dlpFuncResetSyncFlags dlpFuncSetSysDateTime
     dlpFuncVFSFileGetDate dlpFuncVFSFileSetDate dlpFuncWriteSortBlock */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case 'C':
    if (memEQ(name, "PI_ERR_PROT_BADPACKET", 21)) {
    /*                                ^          */
      *iv_return = PI_ERR_PROT_BADPACKET;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "dlpFuncVFSFileGetDate", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncVFSFileGetDate;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncVFSFileSetDate", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncVFSFileSetDate;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "PI_DLP_ARG_FLAG_SHORT", 21)) {
    /*                                ^          */
#ifdef PI_DLP_ARG_FLAG_SHORT
      *iv_return = PI_DLP_ARG_FLAG_SHORT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "dlpFuncReadOpenDBInfo", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncReadOpenDBInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "PI_ERR_GENERIC_MEMORY", 21)) {
    /*                                ^          */
      *iv_return = PI_ERR_GENERIC_MEMORY;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "PI_ERR_FILE_NOT_FOUND", 21)) {
    /*                                ^          */
      *iv_return = PI_ERR_FILE_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "PI_ERR_GENERIC_SYSTEM", 21)) {
    /*                                ^          */
      *iv_return = PI_ERR_GENERIC_SYSTEM;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "dlpFuncGetSysDateTime", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncGetSysDateTime;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncSetSysDateTime", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncSetSysDateTime;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "dlpDBMiscFlagRamBased", 21)) {
    /*                                ^          */
      *iv_return = dlpDBMiscFlagRamBased;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "dlpFuncReadResourceEx", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncReadResourceEx;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpDBFlagAppInfoDirty", 21)) {
    /*                                ^          */
      *iv_return = dlpDBFlagAppInfoDirty;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpFuncResetSyncFlags", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncResetSyncFlags;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFuncWriteSortBlock", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncWriteSortBlock;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "dlpEndCodeOutOfMemory", 21)) {
    /*                                ^          */
      *iv_return = dlpEndCodeOutOfMemory;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpFuncExpCardPresent", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncExpCardPresent;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpFuncDeleteResource", 21)) {
    /*                                ^          */
      *iv_return = dlpFuncDeleteResource;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_ERR_DLP_UNSUPPORTED PI_NET_WRITE_CHUNKSIZE PI_PROGRESS_RECEIVE_DB
     dlpExpCapabilitySerial dlpFuncAddSyncLogEntry dlpFuncCallApplication
     dlpFuncCleanUpDatabase dlpFuncReadNetSyncInfo dlpFuncReadStorageInfo
     dlpFuncVFSVolumeFormat dlpFuncWriteResourceEx vfsFileAttrVolumeLabel */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'C':
    if (memEQ(name, "PI_PROGRESS_RECEIVE_DB", 22)) {
    /*                             ^              */
      *iv_return = PI_PROGRESS_RECEIVE_DB;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "dlpFuncCleanUpDatabase", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncCleanUpDatabase;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "PI_NET_WRITE_CHUNKSIZE", 22)) {
    /*                             ^              */
      *iv_return = PI_NET_WRITE_CHUNKSIZE;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "dlpFuncAddSyncLogEntry", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncAddSyncLogEntry;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "dlpFuncReadNetSyncInfo", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncReadNetSyncInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "PI_ERR_DLP_UNSUPPORTED", 22)) {
    /*                             ^              */
      *iv_return = PI_ERR_DLP_UNSUPPORTED;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpFuncCallApplication", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncCallApplication;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "dlpFuncVFSVolumeFormat", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncVFSVolumeFormat;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "dlpFuncReadStorageInfo", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncReadStorageInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpFuncWriteResourceEx", 22)) {
    /*                             ^              */
      *iv_return = dlpFuncWriteResourceEx;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "dlpExpCapabilitySerial", 22)) {
    /*                             ^              */
      *iv_return = dlpExpCapabilitySerial;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "vfsFileAttrVolumeLabel", 22)) {
    /*                             ^              */
      *iv_return = vfsFileAttrVolumeLabel;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_ERR_GENERIC_ARGUMENT PI_PADP_USE_LONG_FORMAT PI_PROGRESS_RECEIVE_VFS
     dlpDBFlagCopyPrevention dlpFindDBOptFlagGetSize dlpFuncExpSlotEnumerate
     dlpFuncExpSlotMediaType dlpFuncReadRecordIDList dlpFuncResetRecordIndex
     dlpFuncVFSCustomControl dlpFuncVFSGetDefaultDir dlpFuncWriteNetSyncInfo */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case 'F':
    if (memEQ(name, "PI_PADP_USE_LONG_FORMAT", 23)) {
    /*                                ^            */
      *iv_return = PI_PADP_USE_LONG_FORMAT;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "PI_ERR_GENERIC_ARGUMENT", 23)) {
    /*                                ^            */
      *iv_return = PI_ERR_GENERIC_ARGUMENT;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "dlpFuncReadRecordIDList", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncReadRecordIDList;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "PI_PROGRESS_RECEIVE_VFS", 23)) {
    /*                                ^            */
      *iv_return = PI_PROGRESS_RECEIVE_VFS;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "dlpFuncResetRecordIndex", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncResetRecordIndex;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpDBFlagCopyPrevention", 23)) {
    /*                                ^            */
      *iv_return = dlpDBFlagCopyPrevention;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "dlpFindDBOptFlagGetSize", 23)) {
    /*                                ^            */
      *iv_return = dlpFindDBOptFlagGetSize;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpFuncExpSlotMediaType", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncExpSlotMediaType;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "dlpFuncExpSlotEnumerate", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncExpSlotEnumerate;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpFuncWriteNetSyncInfo", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncWriteNetSyncInfo;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "dlpFuncVFSCustomControl", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncVFSCustomControl;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "dlpFuncVFSGetDefaultDir", 23)) {
    /*                                ^            */
      *iv_return = dlpFuncVFSGetDefaultDir;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_24 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_ERR_PROT_INCOMPATIBLE PI_ERR_SOCK_DISCONNECTED PI_SOCK_HONOR_RX_TIMEOUT
     dlpExpCapabilityReadOnly dlpFuncReadAppPreference dlpFuncVFSVolumeGetLabel
     dlpFuncVFSVolumeSetLabel */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'G':
    if (memEQ(name, "dlpFuncVFSVolumeGetLabel", 24)) {
    /*                               ^              */
      *iv_return = dlpFuncVFSVolumeGetLabel;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "PI_ERR_PROT_INCOMPATIBLE", 24)) {
    /*                               ^              */
      *iv_return = PI_ERR_PROT_INCOMPATIBLE;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "PI_ERR_SOCK_DISCONNECTED", 24)) {
    /*                               ^              */
      *iv_return = PI_ERR_SOCK_DISCONNECTED;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "dlpExpCapabilityReadOnly", 24)) {
    /*                               ^              */
      *iv_return = dlpExpCapabilityReadOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "dlpFuncVFSVolumeSetLabel", 24)) {
    /*                               ^              */
      *iv_return = dlpFuncVFSVolumeSetLabel;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "PI_SOCK_HONOR_RX_TIMEOUT", 24)) {
    /*                               ^              */
      *iv_return = PI_SOCK_HONOR_RX_TIMEOUT;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpFuncReadAppPreference", 24)) {
    /*                               ^              */
      *iv_return = dlpFuncReadAppPreference;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_26 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PI_ERR_FILE_ALREADY_EXISTS dlpExpCapabilityHasStorage
     dlpFindDBOptFlagMaxRecSize dlpFindDBSrchFlagNewSearch
     dlpFuncReadNextModifiedRec */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'Y':
    if (memEQ(name, "PI_ERR_FILE_ALREADY_EXISTS", 26)) {
    /*                                 ^              */
      *iv_return = PI_ERR_FILE_ALREADY_EXISTS;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "dlpFindDBSrchFlagNewSearch", 26)) {
    /*                                 ^              */
      *iv_return = dlpFindDBSrchFlagNewSearch;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "dlpFuncReadNextModifiedRec", 26)) {
    /*                                 ^              */
      *iv_return = dlpFuncReadNextModifiedRec;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "dlpExpCapabilityHasStorage", 26)) {
    /*                                 ^              */
      *iv_return = dlpExpCapabilityHasStorage;
      return PERL_constant_ISIV;
    }
    break;
  case 'x':
    if (memEQ(name, "dlpFindDBOptFlagMaxRecSize", 26)) {
    /*                                 ^              */
      *iv_return = dlpFindDBOptFlagMaxRecSize;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_27 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     dlpFindDBSrchFlagOnlyLatest dlpFuncVFSDirEntryEnumerate
     dlpFuncVFSFileGetAttributes dlpFuncVFSFileSetAttributes */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'G':
    if (memEQ(name, "dlpFuncVFSFileGetAttributes", 27)) {
    /*                             ^                   */
      *iv_return = dlpFuncVFSFileGetAttributes;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "dlpFuncVFSFileSetAttributes", 27)) {
    /*                             ^                   */
      *iv_return = dlpFuncVFSFileSetAttributes;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "dlpFindDBSrchFlagOnlyLatest", 27)) {
    /*                             ^                   */
      *iv_return = dlpFindDBSrchFlagOnlyLatest;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "dlpFuncVFSDirEntryEnumerate", 27)) {
    /*                             ^                   */
      *iv_return = dlpFuncVFSDirEntryEnumerate;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(DLP_BUF_SIZE Expense_Pref PILOT_LINK_MAJOR PILOT_LINK_MINOR
	       PILOT_LINK_VERSION PI_AF_PILOT PI_CMD_CMP PI_CMD_NET PI_CMD_SYS
	       PI_DLP_ARG_FIRST_ID PI_DLP_ARG_FLAG_LONG PI_DLP_ARG_FLAG_MASK
	       PI_DLP_ARG_FLAG_SHORT PI_DLP_ARG_FLAG_TINY PI_DLP_ARG_LONG_LEN
	       PI_DLP_ARG_SHORT_LEN PI_DLP_ARG_TINY_LEN PI_DLP_OFFSET_ARGC
	       PI_DLP_OFFSET_ARGV PI_DLP_OFFSET_CMD PI_DLP_VERSION_MAJOR
	       PI_DLP_VERSION_MINOR PI_MSG_PEEK PI_MSG_REALLOC PI_SOCK_RAW
	       PI_SOCK_STREAM PI_TRANSFER_CONTINUE PI_TRANSFER_STOP RPC_End
	       RPC_IntReply RPC_NoReply RPC_NullPtr RPC_PtrReply
	       vfsInvalidFileRef vfsInvalidVolRef vfsMAXFILENAME
	       vfsMountFlagsUseThisFileSystem),
            {name=>"PI_CMP_BAUD", type=>"IV", macro=>"1"},
            {name=>"PI_CMP_FLAGS", type=>"IV", macro=>"1"},
            {name=>"PI_CMP_TYPE", type=>"IV", macro=>"1"},
            {name=>"PI_CMP_VERS", type=>"IV", macro=>"1"},
            {name=>"PI_DEV_ESTRATE", type=>"IV", macro=>"1"},
            {name=>"PI_DEV_HIGHRATE", type=>"IV", macro=>"1"},
            {name=>"PI_DEV_RATE", type=>"IV", macro=>"1"},
            {name=>"PI_DEV_TIMEOUT", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_BUFSIZE", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_COMMAND", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_DATASIZE", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_PALMOS", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_SOCKET", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_DLP_UNSUPPORTED", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_FILE_ABORTED", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_FILE_ALREADY_EXISTS", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_FILE_ERROR", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_FILE_INVALID", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_FILE_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_GENERIC_ARGUMENT", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_GENERIC_MEMORY", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_GENERIC_SYSTEM", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_PROT_ABORTED", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_PROT_BADPACKET", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_PROT_INCOMPATIBLE", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_CANCELED", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_DISCONNECTED", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_INVALID", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_IO", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_LISTENER", type=>"IV", macro=>"1"},
            {name=>"PI_ERR_SOCK_TIMEOUT", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_CMP", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_DEV", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_DLP", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_NET", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_PADP", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_SLP", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_SOCK", type=>"IV", macro=>"1"},
            {name=>"PI_LEVEL_SYS", type=>"IV", macro=>"1"},
            {name=>"PI_NET_SPLIT_WRITES", type=>"IV", macro=>"1"},
            {name=>"PI_NET_TYPE", type=>"IV", macro=>"1"},
            {name=>"PI_NET_WRITE_CHUNKSIZE", type=>"IV", macro=>"1"},
            {name=>"PI_PADP_FREEZE_TXID", type=>"IV", macro=>"1"},
            {name=>"PI_PADP_LASTTYPE", type=>"IV", macro=>"1"},
            {name=>"PI_PADP_TYPE", type=>"IV", macro=>"1"},
            {name=>"PI_PADP_USE_LONG_FORMAT", type=>"IV", macro=>"1"},
            {name=>"PI_PF_DEV", type=>"IV", macro=>"1"},
            {name=>"PI_PF_DLP", type=>"IV", macro=>"1"},
            {name=>"PI_PF_NET", type=>"IV", macro=>"1"},
            {name=>"PI_PF_PADP", type=>"IV", macro=>"1"},
            {name=>"PI_PF_SLP", type=>"IV", macro=>"1"},
            {name=>"PI_PF_SYS", type=>"IV", macro=>"1"},
            {name=>"PI_PROGRESS_RECEIVE_DB", type=>"IV", macro=>"1"},
            {name=>"PI_PROGRESS_RECEIVE_VFS", type=>"IV", macro=>"1"},
            {name=>"PI_PROGRESS_SEND_DB", type=>"IV", macro=>"1"},
            {name=>"PI_PROGRESS_SEND_VFS", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_DEST", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_LASTDEST", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_LASTSRC", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_LASTTXID", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_LASTTYPE", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_SRC", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_TXID", type=>"IV", macro=>"1"},
            {name=>"PI_SLP_TYPE", type=>"IV", macro=>"1"},
            {name=>"PI_SOCK_HONOR_RX_TIMEOUT", type=>"IV", macro=>"1"},
            {name=>"PI_SOCK_STATE", type=>"IV", macro=>"1"},
            {name=>"address_v1", type=>"IV", macro=>"1"},
            {name=>"advDays", type=>"IV", macro=>"1"},
            {name=>"advHours", type=>"IV", macro=>"1"},
            {name=>"advMinutes", type=>"IV", macro=>"1"},
            {name=>"datebook_v1", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagAppInfoDirty", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagBackup", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagBundle", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagCopyPrevention", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagExtended", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagFixedUp", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagHidden", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagLaunchable", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagNewer", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagOpen", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagReadOnly", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagRecyclable", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagReset", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagResource", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagSchema", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagSecure", type=>"IV", macro=>"1"},
            {name=>"dlpDBFlagStream", type=>"IV", macro=>"1"},
            {name=>"dlpDBListMultiple", type=>"IV", macro=>"1"},
            {name=>"dlpDBListRAM", type=>"IV", macro=>"1"},
            {name=>"dlpDBListROM", type=>"IV", macro=>"1"},
            {name=>"dlpDBMiscFlagExcludeFromSync", type=>"IV", macro=>"1"},
            {name=>"dlpDBMiscFlagRamBased", type=>"IV", macro=>"1"},
            {name=>"dlpEndCodeNormal", type=>"IV", macro=>"1"},
            {name=>"dlpEndCodeOther", type=>"IV", macro=>"1"},
            {name=>"dlpEndCodeOutOfMemory", type=>"IV", macro=>"1"},
            {name=>"dlpEndCodeUserCan", type=>"IV", macro=>"1"},
            {name=>"dlpErrAlreadyOpen", type=>"IV", macro=>"1"},
            {name=>"dlpErrArgument", type=>"IV", macro=>"1"},
            {name=>"dlpErrBusy", type=>"IV", macro=>"1"},
            {name=>"dlpErrDeleted", type=>"IV", macro=>"1"},
            {name=>"dlpErrExists", type=>"IV", macro=>"1"},
            {name=>"dlpErrIllegalReq", type=>"IV", macro=>"1"},
            {name=>"dlpErrLimit", type=>"IV", macro=>"1"},
            {name=>"dlpErrMemory", type=>"IV", macro=>"1"},
            {name=>"dlpErrNoError", type=>"IV", macro=>"1"},
            {name=>"dlpErrNoneOpen", type=>"IV", macro=>"1"},
            {name=>"dlpErrNotFound", type=>"IV", macro=>"1"},
            {name=>"dlpErrNotSupp", type=>"IV", macro=>"1"},
            {name=>"dlpErrOpen", type=>"IV", macro=>"1"},
            {name=>"dlpErrParam", type=>"IV", macro=>"1"},
            {name=>"dlpErrReadOnly", type=>"IV", macro=>"1"},
            {name=>"dlpErrSize", type=>"IV", macro=>"1"},
            {name=>"dlpErrSpace", type=>"IV", macro=>"1"},
            {name=>"dlpErrSync", type=>"IV", macro=>"1"},
            {name=>"dlpErrSystem", type=>"IV", macro=>"1"},
            {name=>"dlpErrTooManyOpen", type=>"IV", macro=>"1"},
            {name=>"dlpErrUnknown", type=>"IV", macro=>"1"},
            {name=>"dlpErrUnused1", type=>"IV", macro=>"1"},
            {name=>"dlpErrWrapper", type=>"IV", macro=>"1"},
            {name=>"dlpExpCapabilityHasStorage", type=>"IV", macro=>"1"},
            {name=>"dlpExpCapabilityReadOnly", type=>"IV", macro=>"1"},
            {name=>"dlpExpCapabilitySerial", type=>"IV", macro=>"1"},
            {name=>"dlpFindDBOptFlagGetAttributes", type=>"IV", macro=>"1"},
            {name=>"dlpFindDBOptFlagGetSize", type=>"IV", macro=>"1"},
            {name=>"dlpFindDBOptFlagMaxRecSize", type=>"IV", macro=>"1"},
            {name=>"dlpFindDBSrchFlagNewSearch", type=>"IV", macro=>"1"},
            {name=>"dlpFindDBSrchFlagOnlyLatest", type=>"IV", macro=>"1"},
            {name=>"dlpFuncAddSyncLogEntry", type=>"IV", macro=>"1"},
            {name=>"dlpFuncCallApplication", type=>"IV", macro=>"1"},
            {name=>"dlpFuncCleanUpDatabase", type=>"IV", macro=>"1"},
            {name=>"dlpFuncCloseDB", type=>"IV", macro=>"1"},
            {name=>"dlpFuncCreateDB", type=>"IV", macro=>"1"},
            {name=>"dlpFuncDeleteDB", type=>"IV", macro=>"1"},
            {name=>"dlpFuncDeleteRecord", type=>"IV", macro=>"1"},
            {name=>"dlpFuncDeleteResource", type=>"IV", macro=>"1"},
            {name=>"dlpFuncEndOfSync", type=>"IV", macro=>"1"},
            {name=>"dlpFuncExpCardInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncExpCardPresent", type=>"IV", macro=>"1"},
            {name=>"dlpFuncExpSlotEnumerate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncExpSlotMediaType", type=>"IV", macro=>"1"},
            {name=>"dlpFuncFindDB", type=>"IV", macro=>"1"},
            {name=>"dlpFuncGetSysDateTime", type=>"IV", macro=>"1"},
            {name=>"dlpFuncMoveCategory", type=>"IV", macro=>"1"},
            {name=>"dlpFuncOpenConduit", type=>"IV", macro=>"1"},
            {name=>"dlpFuncOpenDB", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadAppBlock", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadAppPreference", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadDBList", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadFeature", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadNetSyncInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadNextModifiedRec", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadNextModifiedRecInCategory", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadNextRecInCategory", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadOpenDBInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadRecord", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadRecordEx", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadRecordIDList", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadResource", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadResourceEx", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadSortBlock", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadStorageInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadSysInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncReadUserInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncResetRecordIndex", type=>"IV", macro=>"1"},
            {name=>"dlpFuncResetSyncFlags", type=>"IV", macro=>"1"},
            {name=>"dlpFuncResetSystem", type=>"IV", macro=>"1"},
            {name=>"dlpFuncSetDBInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncSetSysDateTime", type=>"IV", macro=>"1"},
            {name=>"dlpFuncUnknown1", type=>"IV", macro=>"1"},
            {name=>"dlpFuncUnknown3", type=>"IV", macro=>"1"},
            {name=>"dlpFuncUnknown4", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSCustomControl", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSDirCreate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSDirEntryEnumerate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSExportDatabaseToFile", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileClose", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileCreate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileDelete", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileEOF", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileGetAttributes", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileGetDate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileOpen", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileRead", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileRename", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileResize", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileSeek", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileSetAttributes", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileSetDate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileSize", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileTell", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSFileWrite", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSGetDefaultDir", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSGetFile", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSImportDatabaseFromFile", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSPutFile", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeEnumerate", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeFormat", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeGetLabel", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeSetLabel", type=>"IV", macro=>"1"},
            {name=>"dlpFuncVFSVolumeSize", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteAppBlock", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteAppPreference", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteNetSyncInfo", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteRecord", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteRecordEx", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteResource", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteResourceEx", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteSortBlock", type=>"IV", macro=>"1"},
            {name=>"dlpFuncWriteUserInfo", type=>"IV", macro=>"1"},
            {name=>"dlpLastFunc", type=>"IV", macro=>"1"},
            {name=>"dlpLoopBackTest", type=>"IV", macro=>"1"},
            {name=>"dlpOpenExclusive", type=>"IV", macro=>"1"},
            {name=>"dlpOpenRead", type=>"IV", macro=>"1"},
            {name=>"dlpOpenReadWrite", type=>"IV", macro=>"1"},
            {name=>"dlpOpenSecret", type=>"IV", macro=>"1"},
            {name=>"dlpOpenWrite", type=>"IV", macro=>"1"},
            {name=>"dlpProcessRPC", type=>"IV", macro=>"1"},
            {name=>"dlpRecAttrArchived", type=>"IV", macro=>"1"},
            {name=>"dlpRecAttrBusy", type=>"IV", macro=>"1"},
            {name=>"dlpRecAttrDeleted", type=>"IV", macro=>"1"},
            {name=>"dlpRecAttrDirty", type=>"IV", macro=>"1"},
            {name=>"dlpRecAttrSecret", type=>"IV", macro=>"1"},
            {name=>"dlpReservedFunc", type=>"IV", macro=>"1"},
            {name=>"dlpVFSOpenExclusive", type=>"IV", macro=>"1"},
            {name=>"dlpVFSOpenRead", type=>"IV", macro=>"1"},
            {name=>"dlpVFSOpenReadWrite", type=>"IV", macro=>"1"},
            {name=>"dlpVFSOpenWrite", type=>"IV", macro=>"1"},
            {name=>"dom1stFri", type=>"IV", macro=>"1"},
            {name=>"dom1stMon", type=>"IV", macro=>"1"},
            {name=>"dom1stSat", type=>"IV", macro=>"1"},
            {name=>"dom1stSun", type=>"IV", macro=>"1"},
            {name=>"dom1stThu", type=>"IV", macro=>"1"},
            {name=>"dom1stTue", type=>"IV", macro=>"1"},
            {name=>"dom1stWen", type=>"IV", macro=>"1"},
            {name=>"dom2ndFri", type=>"IV", macro=>"1"},
            {name=>"dom2ndMon", type=>"IV", macro=>"1"},
            {name=>"dom2ndSat", type=>"IV", macro=>"1"},
            {name=>"dom2ndSun", type=>"IV", macro=>"1"},
            {name=>"dom2ndThu", type=>"IV", macro=>"1"},
            {name=>"dom2ndTue", type=>"IV", macro=>"1"},
            {name=>"dom2ndWen", type=>"IV", macro=>"1"},
            {name=>"dom3rdFri", type=>"IV", macro=>"1"},
            {name=>"dom3rdMon", type=>"IV", macro=>"1"},
            {name=>"dom3rdSat", type=>"IV", macro=>"1"},
            {name=>"dom3rdSun", type=>"IV", macro=>"1"},
            {name=>"dom3rdThu", type=>"IV", macro=>"1"},
            {name=>"dom3rdTue", type=>"IV", macro=>"1"},
            {name=>"dom3rdWen", type=>"IV", macro=>"1"},
            {name=>"dom4thFri", type=>"IV", macro=>"1"},
            {name=>"dom4thMon", type=>"IV", macro=>"1"},
            {name=>"dom4thSat", type=>"IV", macro=>"1"},
            {name=>"dom4thSun", type=>"IV", macro=>"1"},
            {name=>"dom4thThu", type=>"IV", macro=>"1"},
            {name=>"dom4thTue", type=>"IV", macro=>"1"},
            {name=>"dom4thWen", type=>"IV", macro=>"1"},
            {name=>"domLastFri", type=>"IV", macro=>"1"},
            {name=>"domLastMon", type=>"IV", macro=>"1"},
            {name=>"domLastSat", type=>"IV", macro=>"1"},
            {name=>"domLastSun", type=>"IV", macro=>"1"},
            {name=>"domLastThu", type=>"IV", macro=>"1"},
            {name=>"domLastTue", type=>"IV", macro=>"1"},
            {name=>"domLastWen", type=>"IV", macro=>"1"},
            {name=>"edKilometers", type=>"IV", macro=>"1"},
            {name=>"edMiles", type=>"IV", macro=>"1"},
            {name=>"entryAddress", type=>"IV", macro=>"1"},
            {name=>"entryCategory", type=>"IV", macro=>"1"},
            {name=>"entryCity", type=>"IV", macro=>"1"},
            {name=>"entryCompany", type=>"IV", macro=>"1"},
            {name=>"entryCountry", type=>"IV", macro=>"1"},
            {name=>"entryCustom1", type=>"IV", macro=>"1"},
            {name=>"entryCustom2", type=>"IV", macro=>"1"},
            {name=>"entryCustom3", type=>"IV", macro=>"1"},
            {name=>"entryCustom4", type=>"IV", macro=>"1"},
            {name=>"entryFirstname", type=>"IV", macro=>"1"},
            {name=>"entryLastname", type=>"IV", macro=>"1"},
            {name=>"entryNote", type=>"IV", macro=>"1"},
            {name=>"entryPhone1", type=>"IV", macro=>"1"},
            {name=>"entryPhone2", type=>"IV", macro=>"1"},
            {name=>"entryPhone3", type=>"IV", macro=>"1"},
            {name=>"entryPhone4", type=>"IV", macro=>"1"},
            {name=>"entryPhone5", type=>"IV", macro=>"1"},
            {name=>"entryState", type=>"IV", macro=>"1"},
            {name=>"entryTitle", type=>"IV", macro=>"1"},
            {name=>"entryZip", type=>"IV", macro=>"1"},
            {name=>"epAmEx", type=>"IV", macro=>"1"},
            {name=>"epCash", type=>"IV", macro=>"1"},
            {name=>"epCheck", type=>"IV", macro=>"1"},
            {name=>"epCreditCard", type=>"IV", macro=>"1"},
            {name=>"epMasterCard", type=>"IV", macro=>"1"},
            {name=>"epPrepaid", type=>"IV", macro=>"1"},
            {name=>"epUnfiled", type=>"IV", macro=>"1"},
            {name=>"epVISA", type=>"IV", macro=>"1"},
            {name=>"esDate", type=>"IV", macro=>"1"},
            {name=>"esType", type=>"IV", macro=>"1"},
            {name=>"etAirfare", type=>"IV", macro=>"1"},
            {name=>"etBreakfast", type=>"IV", macro=>"1"},
            {name=>"etBus", type=>"IV", macro=>"1"},
            {name=>"etBusinessMeals", type=>"IV", macro=>"1"},
            {name=>"etCarRental", type=>"IV", macro=>"1"},
            {name=>"etDinner", type=>"IV", macro=>"1"},
            {name=>"etEntertainment", type=>"IV", macro=>"1"},
            {name=>"etFax", type=>"IV", macro=>"1"},
            {name=>"etGas", type=>"IV", macro=>"1"},
            {name=>"etGifts", type=>"IV", macro=>"1"},
            {name=>"etHotel", type=>"IV", macro=>"1"},
            {name=>"etIncidentals", type=>"IV", macro=>"1"},
            {name=>"etLaundry", type=>"IV", macro=>"1"},
            {name=>"etLimo", type=>"IV", macro=>"1"},
            {name=>"etLodging", type=>"IV", macro=>"1"},
            {name=>"etLunch", type=>"IV", macro=>"1"},
            {name=>"etMileage", type=>"IV", macro=>"1"},
            {name=>"etOther", type=>"IV", macro=>"1"},
            {name=>"etParking", type=>"IV", macro=>"1"},
            {name=>"etPostage", type=>"IV", macro=>"1"},
            {name=>"etSnack", type=>"IV", macro=>"1"},
            {name=>"etSubway", type=>"IV", macro=>"1"},
            {name=>"etSupplies", type=>"IV", macro=>"1"},
            {name=>"etTaxi", type=>"IV", macro=>"1"},
            {name=>"etTelephone", type=>"IV", macro=>"1"},
            {name=>"etTips", type=>"IV", macro=>"1"},
            {name=>"etTolls", type=>"IV", macro=>"1"},
            {name=>"etTrain", type=>"IV", macro=>"1"},
            {name=>"mailCtgDeleted", type=>"IV", macro=>"1"},
            {name=>"mailCtgDraft", type=>"IV", macro=>"1"},
            {name=>"mailCtgFiled", type=>"IV", macro=>"1"},
            {name=>"mailCtgInbox", type=>"IV", macro=>"1"},
            {name=>"mailCtgOutbox", type=>"IV", macro=>"1"},
            {name=>"mailPrefLocal", type=>"IV", macro=>"1"},
            {name=>"mailPrefRemote", type=>"IV", macro=>"1"},
            {name=>"mailPrefSig", type=>"IV", macro=>"1"},
            {name=>"mailSyncAll", type=>"IV", macro=>"1"},
            {name=>"mailSyncFilter", type=>"IV", macro=>"1"},
            {name=>"mailSyncSend", type=>"IV", macro=>"1"},
            {name=>"mailSyncUnread", type=>"IV", macro=>"1"},
            {name=>"memo_v1", type=>"IV", macro=>"1"},
            {name=>"repeatDaily", type=>"IV", macro=>"1"},
            {name=>"repeatMonthlyByDate", type=>"IV", macro=>"1"},
            {name=>"repeatMonthlyByDay", type=>"IV", macro=>"1"},
            {name=>"repeatNone", type=>"IV", macro=>"1"},
            {name=>"repeatWeekly", type=>"IV", macro=>"1"},
            {name=>"repeatYearly", type=>"IV", macro=>"1"},
            {name=>"todo_v1", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrArchive", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrDirectory", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrHidden", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrLink", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrReadOnly", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrSystem", type=>"IV", macro=>"1"},
            {name=>"vfsFileAttrVolumeLabel", type=>"IV", macro=>"1"},
            {name=>"vfsFileDateAccessed", type=>"IV", macro=>"1"},
            {name=>"vfsFileDateCreated", type=>"IV", macro=>"1"},
            {name=>"vfsFileDateModified", type=>"IV", macro=>"1"},
            {name=>"vfsIteratorStart", type=>"IV", macro=>"1"},
            {name=>"vfsIteratorStop", type=>"IV", macro=>"1"},
            {name=>"vfsModeCreate", type=>"IV", macro=>"1"},
            {name=>"vfsModeExclusive", type=>"IV", macro=>"1"},
            {name=>"vfsModeLeaveOpen", type=>"IV", macro=>"1"},
            {name=>"vfsModeRead", type=>"IV", macro=>"1"},
            {name=>"vfsModeReadWrite", type=>"IV", macro=>"1"},
            {name=>"vfsModeTruncate", type=>"IV", macro=>"1"},
            {name=>"vfsModeWrite", type=>"IV", macro=>"1"},
            {name=>"vfsOriginBeginning", type=>"IV", macro=>"1"},
            {name=>"vfsOriginCurrent", type=>"IV", macro=>"1"},
            {name=>"vfsOriginEnd", type=>"IV", macro=>"1"},
            {name=>"vfsVolAttrHidden", type=>"IV", macro=>"1"},
            {name=>"vfsVolAttrReadOnly", type=>"IV", macro=>"1"},
            {name=>"vfsVolAttrSlotBased", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("PDA::Pilot", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("PDA::Pilot", $types);
__END__
   */

  switch (len) {
  case 5:
    return constant_5 (aTHX_ name, iv_return);
    break;
  case 6:
    return constant_6 (aTHX_ name, iv_return);
    break;
  case 7:
    return constant_7 (aTHX_ name, iv_return);
    break;
  case 8:
    return constant_8 (aTHX_ name, iv_return);
    break;
  case 9:
    return constant_9 (aTHX_ name, iv_return);
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    return constant_24 (aTHX_ name, iv_return);
    break;
  case 25:
    /* Names all of length 25.  */
    /* dlpFuncVFSVolumeEnumerate dlpFuncWriteAppPreference */
    /* Offset 7 gives the best switch position.  */
    switch (name[7]) {
    case 'V':
      if (memEQ(name, "dlpFuncVFSVolumeEnumerate", 25)) {
      /*                      ^                        */
        *iv_return = dlpFuncVFSVolumeEnumerate;
        return PERL_constant_ISIV;
      }
      break;
    case 'W':
      if (memEQ(name, "dlpFuncWriteAppPreference", 25)) {
      /*                      ^                        */
        *iv_return = dlpFuncWriteAppPreference;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 26:
    return constant_26 (aTHX_ name, iv_return);
    break;
  case 27:
    return constant_27 (aTHX_ name, iv_return);
    break;
  case 28:
    /* Names all of length 28.  */
    /* dlpDBMiscFlagExcludeFromSync dlpFuncReadNextRecInCategory */
    /* Offset 3 gives the best switch position.  */
    switch (name[3]) {
    case 'D':
      if (memEQ(name, "dlpDBMiscFlagExcludeFromSync", 28)) {
      /*                  ^                               */
        *iv_return = dlpDBMiscFlagExcludeFromSync;
        return PERL_constant_ISIV;
      }
      break;
    case 'F':
      if (memEQ(name, "dlpFuncReadNextRecInCategory", 28)) {
      /*                  ^                               */
        *iv_return = dlpFuncReadNextRecInCategory;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 29:
    if (memEQ(name, "dlpFindDBOptFlagGetAttributes", 29)) {
      *iv_return = dlpFindDBOptFlagGetAttributes;
      return PERL_constant_ISIV;
    }
    break;
  case 30:
    /* Names all of length 30.  */
    /* dlpFuncVFSExportDatabaseToFile vfsMountFlagsUseThisFileSystem */
    /* Offset 14 gives the best switch position.  */
    switch (name[14]) {
    case 'r':
      if (memEQ(name, "dlpFuncVFSExportDatabaseToFile", 30)) {
      /*                             ^                      */
        *iv_return = dlpFuncVFSExportDatabaseToFile;
        return PERL_constant_ISIV;
      }
      break;
    case 's':
      if (memEQ(name, "vfsMountFlagsUseThisFileSystem", 30)) {
      /*                             ^                      */
#ifdef vfsMountFlagsUseThisFileSystem
        *iv_return = vfsMountFlagsUseThisFileSystem;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 32:
    if (memEQ(name, "dlpFuncVFSImportDatabaseFromFile", 32)) {
      *iv_return = dlpFuncVFSImportDatabaseFromFile;
      return PERL_constant_ISIV;
    }
    break;
  case 36:
    if (memEQ(name, "dlpFuncReadNextModifiedRecInCategory", 36)) {
      *iv_return = dlpFuncReadNextModifiedRecInCategory;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

