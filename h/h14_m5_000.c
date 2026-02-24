section "h14_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    if (Parameter_GetCh1Param(5, 130) <= 3){
        Voice_PlayVoice("H1405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. You came.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If I don't see you actively\nparticipating in something, then\nit'd be my loss.");
        Message_Who(0);
        Message_MsgDisp("主人公", "But the ones participating are the\nplayers.");
        Voice_PlayVoice("H1405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Baseball is about team work!\nYou're also part of the team, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right... Yeah, I am!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(For some reason, I feel\nenthusiastic.\nOkay, I'll do my best cheering them\non!)");
        }
    else {
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nDid you come to watch?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("H1405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI couldn't miss your sporting event.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if being on the bench is\nstill a sporting activity.");
        Voice_PlayVoice("H1405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Being on the bench and the ground is\nthe same thing.\nLook, you have to be fired up～.");
        Character_BlinkStart(5, 0, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1405000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'll be cheering you on, so you have\nto go all out～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay! Thanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even ｛Chris＊＊｝ came\nhere to watch.\nI have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
