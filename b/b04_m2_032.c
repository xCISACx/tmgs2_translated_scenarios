section "b04_m2_032"{
    int var0 = Date_GetDateOption(2, 5);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0402032_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "These guys look kinda similar to\nkiller whales.");
        Message_MsgSel("I want to try riding on its back.", "It had power.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402032_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You'd probably get eaten. Drop it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nEven being sprayed with the water\nwas pleasant.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So it's not similar to one, it is a\nkiller whale.\nI see.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0402032_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Their skin looks slippery.");
        Message_MsgSel("It's a shark, so maybe it'd have rough skin?", "I want to try touching its skin...", "Your skin is also like that.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well... Whatever's fine.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Right.\nLet's go ask the person in charge\nafter the show.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0402032_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Oi, don't touch me.\nDon't go doing things so\nspontaneously.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 2, 2);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0402032_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I've...\nhad water splashed on me by those\nguys.");
        Message_MsgSel("Leave it alone, it'll dry up right away.", "I'll lend you my handkerchief.", "Oh! You look handsome when wet, too!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nI'll think of it as those guys\nsaying hello to me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402032_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's nothing. It'll dry soon.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0402032_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402032_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh? What did you say?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh...\nSorry, I got too carried away...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402032_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Blabbing nonsense...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you looked really cool,\n｛Shiba＊＊｝...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402032_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry! I won't say any more.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402032_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... *Sigh*.\nWhen I'm with you, I feel like even\nmy mind becomes strange.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...)");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402032_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "That face of yours is strange, too.\nHaha...\nWhy are you making that face?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402032_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "So I'm a cool guy....\nTo have you say that to me isn't a\nbad thing...\nperhaps.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
