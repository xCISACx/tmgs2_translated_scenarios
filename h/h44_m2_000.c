section "h44_m2_000"{
    Voice_PlayVoice("H4402000_B00000", #1, "");
    Voice_PlayVoice("H4402000_B00100", #1, "");
    Voice_PlayVoice("H4402000_B00200", #1, "");
    Voice_PlayVoice("H4402000_B00300", #1, "");
    if (Parameter_GetCh1Param(2, 25) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_15F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nDo your best!");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4402000_B00400", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI'm counting on you to cheer,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, leave it to me!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nHow are you feeling?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I feel better now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Seeing your face got rid of the\ntension.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're welcome.\nGood luck with the game!");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H4402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI'll trust you with the cheering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, leave it to me!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nAre you also here to cheer on the\nTrack and Field Club?");
            Voice_PlayVoice("H4402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Maybe.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see.\nThen let's both do our best to\ncheer!");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H4402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nYou came here to cheer for the Track\nand Field Team.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... No.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4402000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I came here to see you cheering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I see. Then I must do my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I have to do my best to\ncheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
