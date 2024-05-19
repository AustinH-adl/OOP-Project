#include "GameSound.hpp"

#include <iostream>

#include "raylib-cpp.hpp"

GameSound::GameSound() {
  this->_soundVolume = 0.5;
  _sound = LoadSound("resources/sound.wav");
};

GameSound::GameSound(const char *soundLocation) {
  this->_soundVolume = 0.5;
  _sound = LoadSound(soundLocation);
  SetSoundVolume(_sound, _soundVolume);
};

GameSound::GameSound(double volume, const char *soundLocation) {
  this->_soundVolume = volume;
  _sound = LoadSound(soundLocation);
  SetSoundVolume(_sound, _soundVolume);
};

GameSound::~GameSound() {
  CloseAudioDevice();
  UnloadSound(_sound);
}

void GameSound::Play() { PlaySound(this->_sound); };

void GameSound::Stop() { StopSound(this->_sound); };
