section "b03_m1_140"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_BlinkStart(1, 2, (#1), 2);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301140_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "... It looks crowded...");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "NON");
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 5);
    Character_ChFace(1, 3, 1);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301140_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Argh～. As I thought...");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0301140_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Well, I guess it can't be helped\nsince it's what live houses are\nlike.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M1", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M1", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M1", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M1", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M1", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M1", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M1", 147);
        }
    }
