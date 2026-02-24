section "s01_pl_010"{
    int var0;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if (var0 == 0){
        var0 = Parameter_ExtChar(9, 6, 2, 1);
        }
    switch (var0){
        case 0:
        System_GlobalWork(4, 0, 1);
        System_GlobalWork(5, 0, 1);
        break ;
        case 1:
        System_GlobalWork(1, 0, 1);
        System_Call_GS2("S04", "M1", 0);
        break ;
        case 2:
        System_GlobalWork(1, 0, 2);
        System_Call_GS2("S04", "M2", 0);
        break ;
        case 3:
        System_GlobalWork(1, 0, 3);
        System_Call_GS2("S04", "M3", 0);
        break ;
        case 4:
        System_GlobalWork(1, 0, 4);
        System_Call_GS2("S04", "M4", 0);
        break ;
        case 5:
        System_GlobalWork(1, 0, 5);
        System_Call_GS2("S04", "M5", 0);
        break ;
        case 6:
        System_GlobalWork(1, 0, 6);
        System_Call_GS2("S04", "M6", 0);
        break ;
        case 7:
        System_GlobalWork(1, 0, 7);
        System_Call_GS2("S04", "M7", 0);
        break ;
        case 8:
        System_GlobalWork(1, 0, 8);
        System_Call_GS2("S04", "M8", 0);
        break ;
        }
    if (System_GlobalWork(4, 1) == 1){
        System_Call_GS2("S02", "PL", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
