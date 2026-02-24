section "h18_m4_000"{
    if (Parameter_GetCh1Param(4, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H1804000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝!\nYou came here to support us!");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H1804000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, I was kinda interested... Hm?\nAre you okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh. Y-Yeah...\nI'm just a little nervous.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H1804000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah～... I really get what you mean...\nBut!");
        Character_ChFace(0, 2, 1);
        Voice_PlayVoice("H1804000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is the part where you hold out\na little more!\nGet over it by getting fired up.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks. I'll do my best!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("H1804000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll cheer so loudly that even\nyou'll be able to hear it.\nSo, I'll see you later!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay. Thanks, ｛Hariya＊＊｝!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
