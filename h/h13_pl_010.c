section "h13_pl_010"{
    int var0 = 0;
    var0 = Parameter_GetCh1Param(2, 130);
    if (var0 >= 3){
        System_Call_GS2("H14", "M2", 0);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    System_Call_GS2("H15", "PL", 0);
    if (var0 >= 3){
        System_Call_GS2("H16", "M2", 0);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    Parameter_AddBkParam(1, 332, 1);
    }
