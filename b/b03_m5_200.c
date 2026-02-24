section "b03_m5_200"{
    if (Date_ChkDateOpen(15) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305200_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "We'll come back here once we've\nchanged.\nI wonder if this is a good place to\nmeet.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. I'll see you later.");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0305200_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "My heart is kind of throbbing.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 201);
        }
    else if (Date_ChkDateOpen(16) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305200_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, it's different to Summer.\nIt has a desolate feeling...\nAnyway, let's take a walk.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 202);
        }
    }
