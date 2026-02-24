section "h19_pl_001"{
    int var0 = 0;
    int var1;
    if (System_GlobalWork(0, 1) == 0){
        if (Parameter_GetBkParam(1, 52) >= 200){
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48);
            Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "We got past the 1st round!\nThe 2nd match is against the\nrepresentatives from Shikoku, Otou\nHigh School.");
            Message_CloseMsg();
            }
        else {
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48, 0);
            var1 = 1;
            }
        }
    else if (System_GlobalWork(0, 1) == 1){
        if (Parameter_GetBkParam(1, 52) >= 210){
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48);
            Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "We got past the 2nd round!\nThe 3rd match is against the\nrepresentatives from Tohoku, Hobun\nHigh School.");
            Message_CloseMsg();
            }
        else {
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48, 0);
            var1 = 2;
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        if (Parameter_GetBkParam(1, 52) >= 240){
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48);
            Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "We got past the 3rd round!\nThe quarterfinals are against the\nrepresentatives from Kinki, Shininbi\nHigh.");
            Message_CloseMsg();
            }
        else {
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48, 0);
            var1 = 3;
            }
        }
    else if (System_GlobalWork(0, 1) == 3){
        if (Parameter_GetBkParam(1, 52) >= 260){
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48);
            Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "We got past the quarterfinals!\nThe semifinals are against the\nrepresentatives from Kansai, Okuarai\nHigh School.");
            Message_CloseMsg();
            }
        else {
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48, 0);
            var1 = 4;
            }
        }
    else if (System_GlobalWork(0, 1) == 4){
        if (Parameter_GetBkParam(1, 52) >= 290){
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48);
            Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "We got past the semifinals!\nThe finals are against the\nrepresentatives from Kanto,\nKuradorousu High School.");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            if (Parameter_GetBkParam(1, 52) >= 320){
                Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Parameter_AddCh1Param(#1, 61, 10);
                Graphic_OpenAnim(48);
                Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
                SoundEffect_PlayStream(1, "SS_DSE_092_000", 127, 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Yay, we won the championships!!\nWe're the #1 Baseball Club in\nJapan!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(We achieved our goal of dominating\nthe entire country in Baseball!\nYay!)");
                Message_CloseMsg();
                Environment_StopME(1, 40);
                Parameter_InBkParam(1, 55, 1);
                var1 = 7;
                }
            else {
                Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Graphic_OpenAnim(48, 0);
                var1 = 6;
                }
            }
        else {
            Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Graphic_OpenAnim(48, 0);
            var1 = 5;
            }
        }
    if (var1 != 0){
        Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        }
    switch (var1){
        case 1:
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We lost the 1st round...\nHow frustrating...)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        case 2:
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We lost the 2nd round...\nThat's unfortunate...)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        case 3:
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We lost the 3rd round...\nHow vexing...)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        case 4:
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We were eliminated in the\nquarterfinals...\nBut we worked hard to be in the top\n8.)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        case 5:
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We were eliminated in the\nsemifinals...\nBut we fought well to be in the top\n4!)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        case 6:
        Music_PlayBGM(0, "MN_K_01_005_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We're the nation's 2nd best team!!\nIt was a little unfortunate, but\ncongratulations, you guys.)");
        Parameter_AddCh1Param(#1, 61, 5);
        break ;
        }
    Music_StopBGM(0, 40);
    if (var1 == 0){
        System_GlobalWork(0, 2, 1);
        }
    else {
        System_Call_GS2("H19", "PL", 10);
        System_GlobalWork(0, 0, 0);
        Message_CloseMsg();
        Screen_WipeOut(21);
        }
    }
