section "f01_m3_011"{
    int var0 = System_Randam(0, 2);
    if (var0 == 0){
        Background_Bg_GS2("BG_SC100_?_1", 1, #1, 0);
        }
    else if (var0 == 1){
        Background_Bg_GS2("BG_SC220_?_1", 1, #1, 0);
        }
    else if (var0 == 2){
        Background_Bg_GS2("BG_SC202_?_1", 1, #1, 0);
        }
    Screen_WipeIn(2);
    System_Call_GS2("F01", "M3", 10);
    }
