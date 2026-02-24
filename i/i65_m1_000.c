section "i65_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I6501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I just happened to pass by....\nDon't come close to me, okay?\nIt seems like I'd get gas flung on\nme.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ugh...");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I6501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Nothing, I was just thinking that\nyou're working hard.\nLike a work horse.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It kind of sounds like you're\npulling my leg...\nWell, I'm working hard.");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Good.\nDon't do anything to get fired.");
        }
    else {
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, I brought some good hand cream.\nWe both have jobs that dry out our\nhands.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow! Thanks.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I6501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. You...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm?");
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I6501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You kinda look good...\nin the uniform. Later.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
