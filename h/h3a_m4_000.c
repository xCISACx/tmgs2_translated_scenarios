section "h3a_m4_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A04000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's great, Japan's number 1!\nYou really did well!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hariya＊＊｝!");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A04000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I was so excited I was yelling at\nthe end.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A04000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "To move me like this...\nyou're amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A04000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... You were close, for real...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H3A04000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You were so close...\nAnyway, what are you gonna do if I\nget depressed?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A04000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Come on, lift your head up!\nYou did your best.\nThere's no need to be so depressed!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A04000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Cheer up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right....\nI came all the way to this point.\nI'm glad I'm in the Track and Field\nClub.)");
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    }
