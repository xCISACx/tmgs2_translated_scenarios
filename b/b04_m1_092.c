section "b04_m1_092"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(1, 2, (#1));
    Character_ChFace(0, 3, 3);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    Voice_PlayVoice("B0401092_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I like colored glass.\nI don't get sick of looking at those\ndelicately distorted lines.");
    Message_MsgSel("As I thought, you are twisted!", "So should we look a little longer?", "Like ramune bottles?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0401092_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Shut up.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401092_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nLet's start from there and go\naround!");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401092_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I like that kinda thing.");
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
