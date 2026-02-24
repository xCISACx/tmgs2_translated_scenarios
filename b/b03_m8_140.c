section "b03_m8_140"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_NE200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308140_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Now may be a good time.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "NON");
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308140_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Wow, it's crowded... Can you see?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Somehow, yes...");
    Voice_PlayVoice("B0308140_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It'll be easy to see once this place\nchanges.\nCome on.");
    Message_Who(0);
    Message_MsgDisp("主人公", "T-Thank you very much.");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0308140_H00300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Let's go. It's about to begin.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M8", 146);
        }
    }
