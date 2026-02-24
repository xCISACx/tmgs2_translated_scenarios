section "o07_pl_000"{
    int var0;
    int var1 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Last is the folk dance!\nAh, it seems like it's about to\nstart.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC422_LI_1", #1, #1, 0);
    int var2 = 0;
    int var3 = Parameter_ExtChar(1, 2, 80, 1, 8);
    if (var3 == 0){
        var3 = 1;
        }
    int var4 = Parameter_ExtChar(1, 2, 80, 1, 8, var3);
    int var5 = Parameter_ExtChar(1, 2, 80, 1, 8, var3, var4);
    while (var1 < 3){
        if (var1 == 0){
            var0 = var3;
            }
        else if (var1 == 1){
            var0 = var4;
            }
        else {
            var0 = var5;
            }
        switch (var0){
            case 0:
            break ;
            case 1:
            System_Call_GS2("O08", "M1", 0);
            break ;
            case 2:
            System_Call_GS2("O08", "M2", 0);
            break ;
            case 3:
            System_Call_GS2("O08", "M3", 0);
            break ;
            case 4:
            System_Call_GS2("O08", "M4", 0);
            break ;
            case 5:
            System_Call_GS2("O08", "M5", 0);
            break ;
            case 6:
            System_Call_GS2("O08", "M6", 0);
            break ;
            case 7:
            System_Call_GS2("O08", "M7", 0);
            break ;
            }
        var1 = var1 + 1;
        }
    }
