section "b04_m1_093"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    Voice_PlayVoice("B0401093_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "That's huge...\nThe T-Rex is nice, it has the whole\n\"king\" feeling about it.");
    Message_MsgSel("This Pteranodon is cute.", "Boys really do like dinosaurs.", "So you like kings, ｛Saeki＊＊｝!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401093_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, Pteranodons might be the king of\npterosaurs.\nI'll leave whether it's cute or not\nalone.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401093_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Speaking of which, I don't know any\nguys who hate dinosaurs.\nWhy is that?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0401093_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Your choice of words was bad, wasn't\nit?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
