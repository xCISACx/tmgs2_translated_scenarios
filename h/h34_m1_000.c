section "h34_m1_000"{
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    if (Parameter_GetCh1Param(1, 130) <= 3){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("H3401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I had a bit of free time...\nso I came to watch.\nDon't lose, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah....\nI came here to see you do your best.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H3401000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Anyway, you win if you get 1st\nplace, right?\nI...\nwill wait for you at the finish\nline....\nDo your best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I'm determined now.\nI'll do my best with all my might!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
