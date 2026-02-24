section "p63_m6_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow～, what should I do!\nI'm so nervous...)");
            Voice_PlayVoice("P6306000_F00000", 6, "P6306000_F00001");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yoo-hoo, ｛主人公｝.\nI came to visit!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
            Voice_PlayVoice("P6306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What, are you nervous?\nThat's unusual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "B-But what will I do if I make a\nmistake...?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6306000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a musical performance.\nEveryone will be playing, so no one\nwill notice if you make one mistake.");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Voice_PlayVoice("P6306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, it's starting!\nWell then, I'll watch from my seat～!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow～, what should I do!\nI'm so nervous...)");
            Voice_PlayVoice("", 6, "P6306000_F00400");
            Message_Who(6);
            Message_MsgDisp("Amachi", "How is your mood,\n｛主人公｝?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
            Voice_PlayVoice("P6306000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Are you all right?\nYou look a little pale.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yes, I'm nervous...\nWhat will I do if I make a mistake?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6306000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, I will laugh as hard as I can.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What～!?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6306000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahahahaha!\nIf you can get that mad, you'll do\nperfect.");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P6306000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, it's starting!\nWell then, I'll watch from here.\nDo your best!");
            }
        Character_Chara_GS2(6, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Background_Bg_GS2("BG_SCD10_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(37, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh～! It's full of guests.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Voice_PlayVoice("P6306000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yep!\nI wanted to watch the overly serious\ntension on Senpai's face....\nWell, not really.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6306000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This year's piece of music will be\nsplendid!\nIt's my favorite!\nI'm looking forward to it!");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Voice_PlayVoice("P6306000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, go perform～!");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will do my best!)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh～! It's full of guests.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Voice_PlayVoice("P6306000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The music performance piece has my\nfavorite game song.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6306000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So, put in some fighting spirit! ...\nI'm expecting it!!");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Voice_PlayVoice("P6306000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Good luck, Senpai!\nI'll listen from here!");
            Character_Chara_GS2(6, "NON");
            }
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Background_Bg_GS2("BG_SCD10_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(38, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else {
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Today's performance was well and\nwas in tune, thanks to always\npracticing...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Aah, ｛Amachi＊＊｝!\nYou came.");
            Voice_PlayVoice("P6306000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Heh, relax.\nI came to tease you cause I'm bored.");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6306000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, take care!\nShow the results of practicing, I'll\nbe listening～!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Today's performance was well and\nwas in tune, thanks to always\npracticing...)");
            Voice_PlayVoice("", 6, "P6306000_F01700");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝. Are you okay?\nYou're not nervous, are you?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! Not at all!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6306000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Really? Good!\nYeah, your face looks calm.\nIt's good to lose your anxiety.");
            SoundEffect_PlayStream(3, "SS_T_00_041_M00");
            Voice_PlayVoice("P6306000_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I will listen peacefully....\nGood luck, Senpai!");
            }
        Character_Chara_GS2(6, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Background_Bg_GS2("BG_SCD10_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(39, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(6, "NON");
    System_Call_GS2("P64", "M6", 0);
    }
