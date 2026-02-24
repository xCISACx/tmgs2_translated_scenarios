section "j04_m7_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_GetCh1Param(7, 130) >= 3){
        if (Parameter_ChkHoliday(2) == 0){
            if (var0 == 0){
                Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
                }
            else if (var0 == 1){
                Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
                }
            else if (var0 == 2){
                Background_Bg_GS2("BG_SC202_?_0", 1, #1, 0);
                }
            else if (var0 == 3){
                Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
                }
            else if (var0 == 4){
                Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...?");
            Character_Chara_GS2(7, "M7_01F", 0);
            Music_PlayBGM(0, "MN_C_07_003_D00", 127, 40);
            Voice_PlayVoice("J0407000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I've found you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
            Voice_PlayVoice("J0407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you free this coming Sunday?");
            Message_MsgSel("Yes, I am free.", "I have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M7", 0);
                System_Call_GS2("J06", "M7", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0407000_G00200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I see... Ah, that is unfortunate.\nI will take my leave now.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if that was a bad thing to\ndo...)");
                Parameter_AddCh1Param(7, 60, #5);
                break ;
                }
            Parameter_AddCh1Param(7, 86, 1);
            }
        else {
            int var1 = Parameter_GetPl1Param(12);
            switch (var1){
                case 0:
                Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0407000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hello, it is Wakaouji.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.\nIs something the matter?");
            Voice_PlayVoice("J0407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you free this coming Sunday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, will there be an\nextra-curricular class?");
            Voice_PlayVoice("J0407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Uhh...\nI had planned on asking you out on a\ndate.\nIs that bad?");
            Message_MsgSel("It's not bad.", "I have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M7", 10);
                System_Call_GS2("J06", "M7", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0407000_G00900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I see... Ah, that is unfortunate.\nI will hang up now.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if that was a bad thing to\ndo...)");
                Parameter_AddCh1Param(7, 60, #5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
