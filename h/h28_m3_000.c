section "h28_m3_000"{
    if (Parameter_GetCh1Param(3, 130) >= 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H2803000_C00300", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It's about time,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛主人公｝.\nYou came here to support us!");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H2803000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Because it's for the Inter High\nSchool Championships...\nYour fans came too...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H2803000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "W-Well, you are the ace.\nEveryone is watching you.\nI also have to do my best to cheer.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H2803000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nPlease play how you usually play.\nIf you do, you'll surely be fine.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I feel determined.\nI'll do my best with all my\nstrength!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
