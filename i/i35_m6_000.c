section "i35_m6_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Whoa... These sweets look delicious!\nI love sweet food.\nPlease give me one slice of this\ncake.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Whoa... They all look yummy!\nI'm so glad that you're treating me\nto such yummy looking food.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("I3506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Isn't it fine to treat your cute\njunior to food?\n... Stingy.");
        }
    else {
        Voice_PlayVoice("", 6, "I3506000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nAre you working hard?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I3506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, it's the new cake!\nIt looks nice... I will take two.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're eating as many as two?");
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("I3506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I will give one to you, Senpai.\nIt looks like you're working hard.\nIt's my reward to you.");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("I3506000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Eat it later, okay!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
