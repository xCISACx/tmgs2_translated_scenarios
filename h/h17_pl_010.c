section "h17_pl_010"{
    int var0;
    System_GlobalWork(2, 0, 0);
    Music_StopBGM(0, 40);
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    switch (var0){
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        break ;
        case 1:
        System_Call_GS2("H18", "M1", 0);
        System_GlobalWork(2, 0, 1);
        break ;
        case 2:
        System_Call_GS2("H18", "M2", 0);
        System_GlobalWork(2, 0, 2);
        break ;
        case 3:
        System_Call_GS2("H18", "M3", 0);
        System_GlobalWork(2, 0, 3);
        break ;
        case 4:
        System_Call_GS2("H18", "M4", 0);
        System_GlobalWork(2, 0, 4);
        break ;
        case 5:
        System_Call_GS2("H18", "M5", 0);
        System_GlobalWork(2, 0, 5);
        break ;
        case 6:
        System_Call_GS2("H18", "M6", 0);
        System_GlobalWork(2, 0, 6);
        break ;
        case 7:
        System_Call_GS2("H18", "M7", 0);
        System_GlobalWork(2, 0, 7);
        break ;
        case 8:
        System_Call_GS2("H18", "M8", 0);
        System_GlobalWork(2, 0, 8);
        break ;
        }
    System_Call_GS2("H19", "PL", 0);
    }
