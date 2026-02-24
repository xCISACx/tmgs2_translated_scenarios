section "h34_m6_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_15F", 0);
    if (Parameter_GetCh1Param(6, 130) <= 3){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nDid you come to support us?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3406000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, I was bored.... Kidding!\nI also have club activities.\nI'm a part of the Cheer Squad!");
        Voice_PlayVoice("H3406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do your best!\nI expect to see your weird style of\nrunning....\nWell, running well is fine, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. You came.");
        Voice_PlayVoice("H3406000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, I was bored.\nAnd I don't hate seeing you run,\nSenpai...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("H3406000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Kidding.\nI have club activities for the Cheer\nSquad!\nI like watching you run though.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H3406000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Uhh, anyway...\nI'll be cheering for you, so show me\nsomething cool!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
