section "r01_pl_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    if (System_GlobalWork(1, 1) != 1){
        var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_WI_0", #1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_WI_0", #1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_WI_0", #1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_WI_0", #1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        if ((Parameter_GetSysParam(0) <= 2) && (Parameter_GetPl1Param(13) == 1)){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThe school is sponsoring a Christmas\nparty today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm a little sick, but even though\nit's tough, I have to try my best to\nparticipate...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, that's right.\nThere's gift exchanging at the\nparty.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I didn't go buy a present!");
            }
        else if ((Parameter_GetSysParam(0) <= 2) && (Parameter_GetPl1Param(13) != 1)){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThe school is sponsoring a Christmas\nparty today!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, that's right.\nThere's gift exchanging at the\nparty.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I didn't go buy a present!");
            }
        else if (Parameter_GetSysParam(0) == 3){
            System_Call_GS2("R01", "PL", 10);
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_NE100_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_Y_00_003_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Well, what shall I buy?");
        while (var1 < 1){
            switch (var1){
                case 0:
                Message_MsgSel("1 Rich gift", "10 Rich gift");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Xmas_Sele(0);
                    switch (Message_Xmas_Sele_Result()){
                        case 0:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 1);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 1:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 2);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 2:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 3);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 3:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 4);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 4:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 5);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 5:
                        if (Parameter_GetPl1Param(23) >= 1){
                            System_GlobalWork(0, 0, 6);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #1);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        }
                    break ;
                    case 1:
                    Message_Xmas_Sele(1);
                    switch (Message_Xmas_Sele_Result()){
                        case 0:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 7);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 1:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 8);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 2:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 9);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 3:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 10);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 4:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 11);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        case 5:
                        if ((Parameter_GetPl1Param(23) >= 1) && (Parameter_GetPl1Param(23) <= 9)){
                            var2 = 2;
                            }
                        else if (Parameter_GetPl1Param(23) >= 10){
                            System_GlobalWork(0, 0, 12);
                            var2 = 1;
                            var1 = 1;
                            Parameter_AddPl1Param(23, #10);
                            }
                        else if (Parameter_GetPl1Param(23) == 0){
                            var2 = 0;
                            var1 = 1;
                            }
                        break ;
                        }
                    break ;
                    }
                break ;
                case 1:
                break ;
                }
            if (var2 == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "This present is perfect!\nTime to go home and change my\nclothes.");
                }
            else if (var2 == 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh*...\nI want to buy a gift, but I don't\nhave enough money...");
                }
            else if (var2 == 0){
                Message_Who(0);
                Message_MsgDisp("主人公", "Aah, I have no money at all! Ugh...");
                }
            }
        if (Parameter_GetSysParam(0) == 3){
            var3 = Parameter_ExtChar(1, 6, 4, 1);
            switch (var3){
                case 8:
                Message_CloseMsg();
                Screen_WipeOut(2);
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Message_CloseMsg();
                System_Call_GS2("R08", "M8", 0);
                System_GlobalWork(1, 0, 1);
                var4 = 1;
                break ;
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        }
    switch (var4){
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(2);
        var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What should I wear to the Christmas\nparty?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(2);
        var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I'm ready.\nTime to leave for the assembly hall\nfor the party!");
        Message_CloseMsg();
        Music_StopBGM(0, 40);
        break ;
        case 1:
        break ;
        }
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
