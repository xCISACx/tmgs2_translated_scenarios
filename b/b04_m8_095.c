section "b04_m8_095"{
    Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP450_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
    Voice_PlayVoice("B0408095_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "This person painted a painting like\nthis...");
    Message_MsgSel("I don't understand abstracts very well...", "Was that an acquaintance?", "It's surely fine art! The color is lovely!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0408095_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh... This?\nIt's \"Goddess of the Spring\nBreeze\"...\nI don't know where the goddess is...\nHmm...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0408095_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I haven't met him directly.\nI heard the name often on a piece.\nIt seems he was a classmate of\nArisawa's.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0408095_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "H-Hey, you look excited!\nWhat just happened!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
