section "b04_m5_094"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    Voice_PlayVoice("B0405094_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Wow...");
    Message_MsgSel("This painting really jumps at you...", "Wouldn't a kid be able to paint better?", "Do you paint things like this?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405094_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, it's got heaps of energy.\nBut it's really subtle.\nI'm inspired...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("B0405094_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That might depend on who is looking\nat the painting...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405094_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "No, I haven't painted such a thing,\nbut I wanna try painting something\nlike this one day.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
