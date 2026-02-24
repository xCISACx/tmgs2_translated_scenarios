section "b04_m5_093"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    Voice_PlayVoice("B0405093_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Although it's just bones, it kinda\nlooks like it'll start moving.");
    Message_MsgSel("It sways in the wind.", "It seems like it'd break if you kick it.", "And dance to some music or something.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405093_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Its head is shaking, so it looks\nlike an akabeko.\nHow cute.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("B0405093_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That would be bad...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 2:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405093_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That would be very cute.\nI want to see it.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
