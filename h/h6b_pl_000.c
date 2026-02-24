section "h6b_pl_000"{
    int var0 = 0;
    if (System_GlobalWork(0, 1) == 0){
        System_Call_GS2("H6B", "G4", 0);
        Music_PlayBGM(0, "MN_J_00_000_002", 127, 40);
        System_GlobalWork(0, 2, 3);
        }
    else if (System_GlobalWork(0, 1) == 3){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        System_Call_GS2("H6C", "G4", 0);
        System_GlobalWork(0, 2, 2);
        Music_PlayBGM(0, "MN_J_00_000_002", 127, 40);
        }
    else if (System_GlobalWork(0, 1) == 5){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        System_Call_GS2("H6D", "G4", 0);
        System_Call_GS2("H6E", "PL", 0);
        System_GlobalWork(0, 0, 0);
        }
    }
