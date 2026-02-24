section "p64_m2_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! It was a success!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That was a good musical\nperformance....\nI was listening so attentively that\nI nearly fell asleep.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! I was praised! ...\nOr at least I think I was?)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P6402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That was an amazing musical\nperformance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... How was it amazing?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I almost blacked out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have practiced more\nseriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! It was a success!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nWas the musical performance nice?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That sort of musical arrangement was\nnice, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P6402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What was that weird sound I heard in\nthe middle of the performance?");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-That...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I lost control laughing...\nWas today's concert a comedy one\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I hate myself...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! It was a success!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "How was it? The musical performance.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It was good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Voice_PlayVoice("P6402000_B00700", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.... I'm glad I came to listen.\nThanks, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝, I...");
            Voice_PlayVoice("P6402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I think it was a good concert.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("P6402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI understand how long you've been\nworking hard in the Brass Band Club\nand that's enough for me.");
            Voice_PlayVoice("P6402000_B01000", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good job, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank you,\n｛Shiba＊＊｝...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
