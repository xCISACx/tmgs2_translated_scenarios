section "i55_m6_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I5506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I happened to be passing by the\nfront, and I saw you, so I called\nout to you.\nSorry, you are in the middle of\nwork.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I5506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, I'm not buying anything!\nI don't have any interest in flowers\nexcept the edible ones....\nWork hard!");
        }
    else {
        Voice_PlayVoice("", 6, "I5506000_F00200");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nAre you working hard?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I5506000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm not buying anything!\nIt's embarrassing buying flowers and\nbringing it home.");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I5506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nEven so, I have to help Senpai with\nher sales.\nSo then...");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("I5506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Give me one flower that you like....\nAh, it's gonna be embarrassing\ntaking it home, so I'm giving it to\nyou.\nTake it!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
