section "b04_m7_221"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_BlinkStart(7, 2, (#1));
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407221_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Indeed, it's Nobunaga Oda...");
    Message_MsgSel("It's not connected to Nobunaga Oda.", "Huh? Where does that appear?", "Please quit being a know-it-all.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407221_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Oh yeah?\nYou don't have to say it aloud.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407221_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, I just wanted to try saying it.\nLook, it's the history of Japan.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0407221_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I'm sorry.\nIt's a teacher thing to say.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
