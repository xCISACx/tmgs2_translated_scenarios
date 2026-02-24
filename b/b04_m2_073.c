section "b04_m2_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402073_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's a cherry blossom blizzard...\nAmazing.");
        Message_MsgSel("Wow, it's very magical.", "It's sad that it doesn't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402073_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nIt's the kind of scenery you can\nonly see right now.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0402073_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI think that having it last around\nthis long is fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402073_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. That's obvious.");
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
        Character_ChFace(0, 2, 1);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402073_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... There's a drunkard here.");
        Message_MsgSel("Should we go look elsewhere?", "It'd be scary if we got involved with him.", "You have to drink when you're here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402073_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nThere are other places where lots of\ncherry blossoms are blooming.");
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
            Voice_PlayVoice("B0402073_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We'll be fine if he doesn't come\nover here.");
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
            Voice_PlayVoice("B0402073_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's fine if you drink in\nmoderation, but I prefer it when\nit's quiet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402073_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "This space... How should I put it...\nIt's magical.");
        Message_MsgSel("Let's take just one flower petal home.", "Let's bring a branch home.", "It's more magical since I'm with you▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402073_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I think that it would wilt straight\naway, though...\nBut I understand how you feel.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402073_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We can't do that, right?\nIt's common sense.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402073_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Speak properly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402073_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I don't get what you mean.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I was just thinking that being able\nto see this scenery with you is like\na dream.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402073_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Why's that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because...\nYou're kind of scary at school,\n｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402073_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "But when you were talking earlier,\nyou looked really relaxed,\n｛Shiba＊＊｝.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402073_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... You.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402073_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's surely because I'm with you.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402073_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're always carefree and at ease.\nSo... I was hooked. Probably.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hehe... Really?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402073_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.... Haha.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is making a\nreally nice face...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
