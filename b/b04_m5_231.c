section "b04_m5_231"{
    int var0 = Date_GetDateOption(2, 68);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405231_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This roller coaster ride is too\nlong...");
        Message_MsgSel("Awesome! Let's ride it once more!", "I'm so scared that I can barely stand...", "That was a letdown.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405231_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is bad...\nSorry, I can't do this anymore...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405231_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You too? Thank gosh...\nI couldn't open my eyes throughout\nthe ride, either...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0405231_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "S-Seriously? You're serious...\nI can't believe it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405231_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "*Sigh*... That was some speed...\nFor a moment, a saw a whole another\nworld...");
        Message_MsgSel("Where was this world?", "I don't really want to go there.", "You were laughing like mad.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405231_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you're driven to the point where\nyou think \"No more～!\", then you\nshould be able to see it...\n*sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405231_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's for your own good that\nyou don't go there!\nLet's hurry up and leave!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405231_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nI kinda heard a snapping sound...\nand before I knew it, I was\nlaughing...\n*Sigh*");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405231_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There's a roller coaster in America\nthat has 7 turns...");
        Message_MsgSel("What a frightening place...", "As if～!", "That's too much!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405231_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's heaps scary.\nI still can't forget about that\ntime...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405231_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm serious! I even rode it myself～.\nWhy would I lie about it...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0405231_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm serious!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Aren't you exaggerating?");
                Voice_PlayVoice("B0405231_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I rode it myself...\nWhat can I do to make you believe\nme?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll believe it when I see it with\nmy own two eyes.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405231_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then...\nyou'll go all the way to America?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405231_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh. I-I don't really mind, but...\nIt's not something you can do in a\nday trip.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405231_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Umm... Are you okay with a photo?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I want to see the actual thing.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405231_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "............ I kinda...\ndon't have any more ideas....");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405231_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Uhh... you wanna see the real thing?\nIn America? With me?\nA roller coaster?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I made him worry...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405231_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I want you to try saying that after\nyou go and see it for yourself...\nIt's seriously awful...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
