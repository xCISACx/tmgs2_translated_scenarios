section "b03_m7_040"{
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Background_Bg_GS2("BG_WF400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0307040_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It's almost opening time. Let's go.");
    Character_Chara_GS2(7, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, Sensei!\nThe entrance is on the other side!");
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Message_PauseSkinship();
    Voice_PlayVoice("B0307040_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Ah, well then, let's go over there.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(7, "NON");
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0307040_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Ah, the seats. Watch your step.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(7) == 1){
        System_Call_GS2("B04", "M7", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M7", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M7", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M7", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M7", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M7", 46);
        }
    }
