section "h48_m3_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H4803000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's about time,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nDid you come here to cheer too?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4803000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is the grand stage.\nOur entire prefecture is watching\nthis game, not just our school.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right...\nThe players must be feeling a lot of\npressure.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H4803000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is why you are important.\nPlease cheer for them so that the\nplayers can play in a relaxed way.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H4803000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I... will also be cheering for you.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H4803000_C00800");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's about time,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nDid you come here to cheer too?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4803000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, because our school is in the\nlimelight....\nBoth the Track and Field Club and\nthe Cheerleading Club.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H4803000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You...\nhave been practicing for this day,\nhaven't you?\nThrough thick and thin.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nso you knew, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4803000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Y-Yeah.\nSo that is why I thought that I had\nto come by all means.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4803000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I... will be cheering you on.\nPlease do your best.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I feel more determined!\nI will do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
