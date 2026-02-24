section "h38_m6_000"{
    if (Parameter_GetCh1Param(6, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 6, "H3806000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nHow are you feeling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nYou came here to cheer for me.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3806000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Of course! I'm in the Cheer Squad.\nWhat would I do if I didn't come to\nthis event?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3806000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Today is your big day, right?\nIsn't it obvious that I'd still come\nhere even if I didn't have club\nactivities?");
        Character_BlinkStart(6, 0, (#1));
        Voice_PlayVoice("H3806000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Since I came here to cheer you on,\nshow me your best running!\n... Don't fall over, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
