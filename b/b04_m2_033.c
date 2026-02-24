section "b04_m2_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0402033_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Whale sharks, huh.\nThere's something about its face...");
        Message_MsgSel("They don't feel scary, as they have love.", "It's like we'll get swallowed by them!", "It seems like it was hard to get them here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402033_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Even though it's a shark, that flat\nface of theirs is too charming.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402033_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It seems like...\nthey wouldn't do something like\nthat, it's not in them.\nThese guys don't behave like sharks.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402033_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThat's not a feeling you'd get by\nlooking at their faces, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0402033_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The person raising these guys must\nfind it tough to take care of\nthem...");
        Message_MsgSel("I think that it's a fun job.", "It might be a painful job.", "Will you work here, ｛Shiba＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402033_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Only if you like it.\nBut it seems like you need strength,\nand we can't say for sure that\nyou're not in danger, right?");
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
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402033_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nBut the inhabitants of the tank are\nprobably glad that the person\nraising them is working hard for\nthem.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402033_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "How did you arrive at that point?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0402033_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nHey, hasn't that whale shark been\nstaring at us this whole time?");
        Message_MsgSel("Maybe it wants to leave the tank...?", "Does it think that we're food!?", "It might like you, ｛Shiba＊＊｝▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402033_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That large body of his probably\nwants to go swimming in the vast,\nbarrier-free ocean.");
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
            Voice_PlayVoice("B0402033_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha, if that was true, it'd\nprobably only think of you as food.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402033_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWhy are you getting so excited by\nyourself?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402033_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha, so it likes me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha.\nBut the whale sharks are really\ncharming and cute.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402033_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402033_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...... You...\nare like a whale shark.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!? Does m-my face look flat?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402033_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "As if it would ever look like\nthat..........");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0402033_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I really don't get sick of\nlooking...\nI might even wanna admire it\nforever.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Saying that I'm like a whale\nshark....\n｛Shiba＊＊｝ is so mean...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
