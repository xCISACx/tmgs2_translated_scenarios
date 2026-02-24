section "b04_m3_031"{
    int var0 = Date_GetDateOption(2, 4);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0403031_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is the saltwater fish corner...\nThere seems to be quite a variety of\nspecies.");
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nYes, there are sea bream and\nflounders.\nIt is a compact kind of Ryuujin's\nPalace.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is a fish that inhabits\ncoral reefs.\nThere are lots of vividly colored\nfish, as if they can be recognized\nby color.");
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
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403031_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt is not a fish tank in a sushi\nstore.\nI do not feel hungry when I see fish\nat the aquarium.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403031_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is the deep-sea fish corner.\nThere are a lot of living things\nwith strange shapes.");
        Message_MsgSel("Ah, that fish and I exchanged glances!", "I wonder what the water pressure is.", "Wah, there's a massive spider!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThings living in the deep sea\ngenerally have bad vision.\nThey should not be able to look\nstraight at you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, it seems like the fish have\ngotten used to the low pressure as\nthey were transported here.\nThat is why the water pressure is\nlow.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403031_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Calm down.\nThat is the giant spider crab.\nIt is the world's largest\ncrustacean.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403031_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "A fish tank full of jellyfish...\nFor some reason, only this area has\na mysterious atmosphere.");
        Message_MsgSel("That jellyfish is shining!", "I can't get sick of looking at them...", "Soft～▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Yes, it is a ctenophore.\nIt does not shine on its own.\nThe combs in its body is just\nreflecting light.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403031_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is calming.\nI can understand why there are more\nand more people owning them as pets.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403031_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nThis is one example of an animal\nwithout bones.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403031_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "W-What is with that?\nAre you supposed to be a jellyfish?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403031_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nYou expressed it with not words, but\nactions.\nI cannot predict your behaviour.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403031_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nSpeaking of which, that element of\nsurprise is also one of your\ncharms...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403031_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no! When I am with you...\nI always find some sort of\nstimulation.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403031_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That is why, without restraining\nyourself, I want you to...\njust be yourself when you are with\nme...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
