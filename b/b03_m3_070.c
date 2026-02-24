section "b03_m3_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303070_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "As expected, there are many people\nhere to view the flowers.\nEveryone wants to see the same\nthing.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, that's right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 73);
        }
    else if (Date_ChkDateOpen(20) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303070_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What good weather.\nIt is the perfect weather for a\npicnic.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you're right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 72);
        }
    else if (Date_ChkDateOpen(21) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Do you want to go see the water fountains?", "Let's walk along the avenue.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303070_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay, I do not mind.\nWhen it gets hot, I long to be by\nthe water.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 71);
            break ;
            case 1:
            Voice_PlayVoice("B0303070_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay, I do not mind.\nIt seems like it will be cooler if\nwe are under the shade of the trees.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 74);
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0303070_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You had better watch your step.\nYou could slip on the fallen leaves.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303070_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is quiet...\nThere are few people, so it is\neasier to walk here.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you're right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 76);
        }
    }
