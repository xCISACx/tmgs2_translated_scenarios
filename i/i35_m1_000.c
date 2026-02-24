section "i35_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("I3501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, I just came here to look at\ncakes.\nI'm not buying any, so don't worry\nabout me.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome.");
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I've got an order from Sangosho for\nthe and chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, thank you for waiting....\nAh, this is the receipt.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I3501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh... You're quite good at this.\nYou kinda have this shop employee\nfeeling.\nAnyway, do your best.");
        }
    else {
        Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome!");
        Voice_PlayVoice("I3501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Is the rare cheesecake ready?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. It is ready.");
        Character_BlinkStart(1, 0, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I was thinking about ordering other\ncakes next time.\nWhat's good?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nWhat about this blackberry pie?\nIt's kind of an item that we boast\nabout.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I3501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, that might be good.\nThen I'll take one full pie.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you very much▼");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("I3501000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That is kinda nice...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
