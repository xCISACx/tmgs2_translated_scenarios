section "b04_m2_024"{
    int var0 = Date_GetDateOption(2, 3);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402024_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's just one lap around the bay...\nAre you having fun?");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the sea shore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402024_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really?\nI might feel that way too, if it\nwere quieter and had fewer people.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402024_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nEven though it's the same sea\nbreeze, I wonder why it feels\ndifferent to when I'm on land.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402024_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, a little...\nBut don't answer a question with a\nquestion.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402024_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nThat reminds me, when I was a kid, I\nthought that a sightseeing cruiser\nwas a pirate ship.");
        Message_MsgSel("Yeah, even sailing ships have power!", "Eh, like with a swan- shaped figure!?", "As if pirates exist.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402024_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nSomehow, it even feels like we're\nsetting off on a voyage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402024_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Have you ever seen a pirate ship\nwith one?\n...\nNo, I can't say for sure that there\nisn't a ship like that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("B0402024_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't think they exist, now.\nDon't take it so seriously.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402024_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I can see quite far into the\ndistance today.\nDoesn't the horizon look kinda\ncurved?");
        Message_MsgSel("You can feel that the earth is round.", "I want to feed the seagulls!", "The sea is vast, it'd be scary if we crashed.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402024_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. Nature is so grand...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402024_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You can if you want...\nBut we don't have any feed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402024_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Would a sightseeing cruise crash?\nDon't say stupid things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402024_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "How would we crash in this area?\nYou exaggerate too much.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402024_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402024_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, even if we did crash, you\nshould relax.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402024_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm good at swimming.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...?");
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0402024_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Holding you while swimming would be\na breeze.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402024_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "............\nThat is how good I am at swimming.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
