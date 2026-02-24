section "j04_m6_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(6, "M6_01F", 0);
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
        Music_PlayBGM(0, "MN_C_06_003_D00", 127, 40);
        if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Amachi＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0406000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, are you free this Sunday?");
            Message_MsgSel("Yeah, I don't really have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M6", 0);
                System_Call_GS2("J06", "M6", 0);
                break ;
                case 1:
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("J0406000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, is that so? Then it's fine.\nForget about it.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(6, 60, #5);
                Parameter_AddCh1Param(6, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Voice_PlayVoice("", 6, "J0406000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!\nI finally found you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Amachi＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, are you free this Sunday?\nYou're free, right?");
            Message_MsgSel("Yeah, I don't really have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M6", 0);
                System_Call_GS2("J06", "M6", 0);
                break ;
                case 1:
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("J0406000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah... is that so? What the...?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("J0406000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sorry, it's fine then. It's nothing.\nForget it!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(6, 60, #5);
                Parameter_AddCh1Param(6, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(6, 86, 1);
        }
    else {
        int var1 = Parameter_GetPl1Param(12);
        switch (var1){
            case 0:
            Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello... Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Amachi＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, are you free this Sunday?");
            Message_MsgSel("Yeah, I don't really have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M6", 10);
                System_Call_GS2("J06", "M6", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0406000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see. It's fine then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(6, 60, #5);
                Parameter_AddCh1Param(6, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello. Senpai? It's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Amachi＊＊｝.\nWhat's up.");
            Voice_PlayVoice("J0406000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Um, you know...\nAre you perhaps free this Sunday?");
            Message_MsgSel("Yeah, I don't really have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M6", 10);
                System_Call_GS2("J06", "M6", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0406000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah... is that so? Then it's nothing.\nBye bye.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(6, 60, #5);
                Parameter_AddCh1Param(6, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
