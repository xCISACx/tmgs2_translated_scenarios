section "h24_m6_000"{
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
        Voice_PlayVoice("H2406000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yes, of course!\nI'm in the Cheer Squad, aren't I?\n...\nIn another words, I'm also doing my\nclub activities!");
        Voice_PlayVoice("H2406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do your best!\nI expect to see your weird style of\nplaying!\n... Well, playing well is fine, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. You came.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2406000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, I was bored.... Kidding!\nI also have club activities since\nI'm a part of the Cheer Squad!");
        Character_ChFace(0, 2, 1);
        Voice_PlayVoice("H2406000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'll be cheering for you more than\nhow I usually cheer, Senpai.\nSo play properly!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2406000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Even though it's club activities,\nsince I'm here, I'll show you how\ncool I am!\n... No playing weirdly, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
