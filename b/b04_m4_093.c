section "b04_m4_093"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    Voice_PlayVoice("B0404093_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Woah, what huge bones!\nIt's hard to believe these used to\nexist in the old days.");
    Message_MsgSel("I feel the mystery of ancient times.", "Those bones are absolutely fake.", "Maybe they still exist somewhere.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404093_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Feeling the mystery of ancient\ntimes...\nLike to get on the very top of a\nplesiosaur's head and look above\nground...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 3, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404093_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Read the description carefully!\nThey said it's the real deal.\nI even read it...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404093_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Haha, if they were, it'd be\ninteresting!\nI want to meet these guys.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
