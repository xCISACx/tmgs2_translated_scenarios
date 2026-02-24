section "h14_m6_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_15F", 0);
    if (Parameter_GetCh1Param(6, 130) <= 3){
        Voice_PlayVoice("", 6, "H1406000_F00000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nAre you in high spirits?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. You came.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "As a part of the Cheer Squad's\nactivities.\nWe'll be cheering them on.");
        Voice_PlayVoice("H1406000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So do your best! ...\nBut all you're doing is watching.\nThat's what a manager does.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer\nthem on!)");
        }
    else {
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. You came.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("H1406000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, I was bored. Also...\nI wanted to see you, Senpai.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1406000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Kidding! I was lying!\nI did wanna see you, but I'm also\nhere because I'm in the Cheer Squad!");
        Voice_PlayVoice("H1406000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Being a manager is tough even if you\nlook like you're doing nothing.\nDo your best without wearing\nyourself out!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer\nthem on!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
