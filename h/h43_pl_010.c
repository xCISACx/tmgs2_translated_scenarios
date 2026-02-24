section "h43_pl_010"{
    int var0 = 0;
    var0 = Parameter_GetCh1Param(6, 130);
    if (var0 >= 3){
        System_Call_GS2("H44", "M6", 0);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    System_Call_GS2("H45", "PL", 0);
    if (var0 >= 3){
        System_Call_GS2("H46", "M6", 0);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    Parameter_AddBkParam(4, 332, 1);
    }
