section "q31_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, ｛Hikami＊＊｝ is...\nAh, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0903000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning.\nI was making preparations.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it's okay.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q0903000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see. Well then, let us depart.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, ｛Hikami＊＊｝ is...\nAh, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0903000_C00200", 3, "Q0903000_C00201");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.\nYou seem to be in high spirits\ntoday.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep! Please treat me well today.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("Q0903000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No, it is I who should say so.\nWell, let us depart.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, ｛Hikami＊＊｝ is...\nAh, he's here already!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0903000_C00400", 3, "Q0903000_C00401");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.\nThis is ideal weather for\nsightseeing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝.\nDid I keep you waiting...?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("Q0903000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No, you are on time.\nI always act five minutes ahead of\ntime.\nSo you would not have to wait.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Great!");
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("Q0903000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "In addition, I took advantage of the\ntime and was able to reconfirm\ntoday's course....\nWell, let's leave.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
