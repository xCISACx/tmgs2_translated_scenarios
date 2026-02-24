section "h24_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    if (Parameter_GetCh1Param(5, 130) <= 3){
        Voice_PlayVoice("H2405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nDid you come here to support us?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wanted to see you in your Lacrosse\nwear▼ As I thought, it's cute.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks.\nWatch the actual game as well!");
        Voice_PlayVoice("H2405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, of course. Do your best～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ came, so I\nhave to do my best!)");
        }
    else {
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, but I also came to see you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "To see if I'm actually playing and\nstuff?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Eh? Ah, hmm, well...\nYeah, I'll leave it at that.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2405000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm looking forward to seeing you\nplay, so do your best▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
