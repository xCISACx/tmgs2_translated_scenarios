section "h14_m2_000"{
    if (Parameter_GetCh1Param(2, 25) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝, you came.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Only because I was in the area.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see.\nBut since you're here, I'd be glad\nif you cheered them on, too.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H1402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay. I'm watching.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(For some reason, I feel\nenthusiastic.\nOkay, I'll do my best cheering them\non!)");
            }
        else {
            Voice_PlayVoice("H1402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Being the manager seems tough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝! You came.");
            Character_ChFace(0, 2, 3);
            Voice_PlayVoice("H1402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.\nI came because you're too\nenthusiastic and bothering everyone\nelse.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, that's mean!");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'll be watching from over there, so\ndo your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even ｛Shiba＊＊｝ came\nhere to watch.\nI have to do my best cheering them\non!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_15F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nGood luck with the game!");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah. Please support us.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I should do my best to\ncheer on ｛Shiba＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nGood luck with the game!");
            Voice_PlayVoice("H1402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're fired up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Of course!\nAren't you, ｛Shiba＊＊｝?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Do I look like I'm not?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... No.\nI feel like you're fired up enough.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "When I see you doing your best, I\nget excessively fired up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Alright, I should go.\nI'll leave the cheering to you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright!\nI'll do my best to support them!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
