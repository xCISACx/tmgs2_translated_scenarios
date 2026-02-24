section "b04_m3_202"{
    int var0 = Date_GetDateOption(2, 16);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403202_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "As expected, the beach in winter is\nquiet.\nThere are not many people around.");
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403202_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, a little....\nBut it seems like I will be able to\ndo some self-reflecting.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Voice_PlayVoice("B0403202_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... We did not come here to fish.\nBesides, I have no intention of\npurchasing a fishing license.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("B0403202_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Stop stealing glances at them.\nEven if you look at them, you will\nnot get warm.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403202_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are a variety of things\nwashing up ashore...");
        Message_MsgSel("Ah, a coconut!", "Ah, sea glass!", "Ah, wakame seaweed!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403202_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, they occasionally drift ashore.\nMeaning that we are connected to a\nvast world.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403202_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, a glass fragment is tumbled\naround by the waves, which takes off\nthe edges....\nThe power of nature is great.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0403202_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nOne or two bits of seaweed is\nnothing rare.\nWere you perhaps surprised, since\nyou said it in such a loud voice?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 2, (#1));
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403202_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is mysterious when I am looking\nout at the ocean from here.\nIt clears my head...");
        Message_MsgSel("It's a good place to change your mood.", "Should we sit down on the driftwood?", "Is your head tired?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403202_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, that is why we came here.\nI even take walks here alone,\noccasionally.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403202_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right... That piece looks good.\nLet us calmly listen to the sounds\nof the waves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0403202_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That is not the case.\nIt is so that I can use my mind\nefficiently.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403202_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I wonder...\nIt is certainly true that my\nthoughts have been focused on one\nthing lately.");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403202_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nNo matter how much I think, I cannot\nderive a good conclusion.\nIt has never happened before.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm... What do you think about?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403202_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "About... so-called friendships.\nI want various things to change.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403202_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I...\nI want to know more about the other\nperson, and I also want them to know\nmore about me...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0403202_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "In other words, I want to move on to\nthe next step.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403202_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I-I mean- I would be grateful if you\nshared your opinion with me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Me?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403202_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right, like if it were you, you\nwould do this, or you would like the\nother person to do this, and such.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........\nHmm, this is a difficult question...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403202_C01900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nAs expected, I have to think about\nit myself.\nI cannot behave dishonestly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\n｛Hikami＊＊｝, what did you\nmean by \"behave dishonestly\"...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
