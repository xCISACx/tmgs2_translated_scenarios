section "p84_m8_000"{
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright.\nThese are all the documents!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P7408000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, how skilled.\nAs expected of Anneri's future star!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ehehe, I was complimented by\nMasaki-senpai!)");
            SoundEffect_StopStream(3, 40);
            }
        else {
            SoundEffect_PlayStream(1, "SS_DSE_052_000", 127, 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh...\nHow many copies did they need,\nagain...)");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P7408000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nDidn't they say they needed 10 more\ncopies?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Ah!");
            SoundEffect_StopStream(1, 40);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7408000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No matter what the circumstances\nare, you gave them too many\ncopies...\nAh, it can't be helped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* What a huge failure...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nThings have finally calmed down...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("P7408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You've worked hard.\nIt seems like things have somehow\ncalmed down.\nHere, it's tea.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, Masaki-senpai...\nThank you very much.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You're a hard worker.\nIt would be easier on you if you cut\ncorners, too.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, the fact that you didn't do\nthat is one of your good points.\nWell done.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ehehe, I was complimented by\nMasaki-senpai!)");
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... I can't handle anymore...\nI give up...)");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(8, "M8_01F", 0);
            Voice_PlayVoice("P7408000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You've worked hard～...\nAh, hey, are you okay!? Geez...\nyou worked too hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "But...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7408000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "There's no \"but\" about it.");
            Voice_PlayVoice("P7408000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I either rest before I get tired or\nrest because I'm tired.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P7408000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Think about which one wouldn't\nburden other people.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... Sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* What a huge failure...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew* Things have calmed down.\nMaybe I should also go around.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Masaki-senpai.");
            Voice_PlayVoice("P7408000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh. You're making a relaxed face.\nAre things going well?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, thanks to all the Student\nCouncil Executives working hard,\nnothing has gone wrong.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'm sure your juniors also know how\nmodest you are.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P7408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, well done. Keep it up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\nMasaki-senpai!)");
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Things aren't calming down\nat all...)");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Character_Chara_GS2(8, "M8_??F", 0);
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Masaki-senpai.");
            Voice_PlayVoice("P7408000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... You look pretty tired.\nYou haven't finished all your work,\nhave you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nIt feels like I'm getting even more\nwork...");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Geez...\nAren't you thinking, \"I can't depend\non others and I have to do it all by\nmyself!\"?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Everyone looks busy...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7408000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Aren't Culture Festivals about\neveryone cooperating to turn it into\na success?");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P7408000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Remember to depend a little more on\nthe people around you, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, what a huge failure...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
